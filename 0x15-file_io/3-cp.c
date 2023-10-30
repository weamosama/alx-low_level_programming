#include "main.h"

/**
 *print_error_close - print file close error and exit.
 *@file_des: file
 */
void print_error_close(int file_des)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_des);
	exit(100);
}

/**
 *print_error_read - print file read error and exit.
 *@file_name: file
 */
void print_error_read(char *file_name)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
	exit(98);
}

/**
 *print_error_write - print file write error and exit.
 *@file_name: file
 */
void print_error_write(char *file_name)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
	exit(99);
}

/**
 *main - copies the content of a file to another file.
 *@argc: number of command line arguments
 *@argv: An array containing the program command line arguments
 *Return: Always success.
 */
int main(int argc, char *argv[])
{
	int fp_from, fp_to, wc;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp_from = open(argv[1], O_RDONLY);
	if (argv[1] == NULL || fp_from < 0)
	{
		print_error_read(argv[1]);
	}
	fp_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fp_to < 0)
	{
		print_error_write(argv[2]);
		close(fp_from);
	}
	while ((wc = read(fp_from, buffer, 1024)) > 0)
	{
		if (wc != write(fp_to, buffer, wc))
		{
			print_error_write(argv[2]);
			close(fp_from);
			close(fp_to);
		}
	}
	if (wc < 0)
	{
		print_error_read(argv[1]);
	}
	if (close(fp_from) < 0)
	{
		print_error_close(fp_from);
	}
	if (close(fp_to) < 0)
	{
		print_error_close(fp_to); }
	return (0);
}
