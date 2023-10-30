#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 *print_elf_info - Print ELF header information.
 *@elf_header: The ELF header structure.
 */
void print_elf_info(Elf64_Ehdr *elf_header)
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}

	printf("\n");

	printf("  Class:                             %s\n",
		(elf_header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" :
		((elf_header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "Unknown"));

	printf("  Data:                              %s\n",
		(elf_header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" :
		((elf_header->e_ident[EI_DATA] == ELFDATA2MSB) ? "2's complement, big-endian" : "Unknown"));

	printf("  Version:                           %d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
		(elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Unknown");
	printf("  ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
		(elf_header->e_type == ET_REL) ? "REL (Relocatable file)" : "Unknown");
	printf("  Entry point address:               0x%llx\n", (long long)(elf_header->e_entry));
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		return (98);
	}

	Elf64_Ehdr elf_header;
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		dprintf(STDERR_FILENO, "Error: Can't read ELF header from file %s\n", argv[1]);
		close(fd);
		return (98);
	}

	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file: %s\n", argv[1]);
		close(fd);
		return (98);
	}

	printf("ELF Header:\n");
	print_elf_info(&elf_header);

	close(fd);
	return (0);
}
