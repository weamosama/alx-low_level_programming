#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 *main - Copy the content of one file to another file.
 *@argc: The number of arguments.
 *@argv: An array of argument strings.
 *
 *Return: (0) on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", argv[2]);
		close(file_from);
		return (99);
	}

	while ((bytes_read = read(file_from, buffer, 1024)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(2, "Error: Can't write to file %s\n", argv[2]);
			close(file_from);
			close(file_to);
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(file_from);
		close(file_to);
		return (98);
	}

	if (close(file_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		return (100);
	}

	if (close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		return (100);
	}

	return (0);
}
