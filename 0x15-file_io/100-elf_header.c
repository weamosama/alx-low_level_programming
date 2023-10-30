#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 *print_elf_info - Print ELF header information.
 *@header: The ELF header structure.
 */
void print_elf_info(Elf64_Ehdr *header)
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}

	printf("\n");

	printf("  Class:                             %s\n",
		(header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" :
		((header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "Unknown"));

	printf("  Data:                              %s\n",
		(header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" :
		((header->e_ident[EI_DATA] == ELFDATA2MSB) ? "2's complement, big-endian" : "Unknown"));

	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
		(header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Unknown");
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
		(header->e_type == ET_REL) ? "REL (Relocatable file)" : "Unknown");
	printf("  Entry point address:               0x%llx\n", (long long)(header->e_entry));
}
/**
 * main - main
 * @argc: number
 * @argv: list
 * @Return: int
 */
int main(int argc, char *argv[])
{
	int file_descriptor;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit (98);
	}

	file_descriptor = open(argv[1], O_RDONLY);
	if (file_descriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit  (98);
	}

	if (read(file_descriptor, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr) || memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file: %s\n", argv[1]);
		close(file_descriptor);
		exit (98);
	}

	printf("ELF Header:\n");
	print_elf_info(&header);

	close(file_descriptor);
	return (0);
}
