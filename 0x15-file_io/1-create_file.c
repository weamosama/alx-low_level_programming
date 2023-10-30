#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 *create_file - Creates a file with specified permissions with text.
 *@filename: The name of the file to create.
 *@text_content: A NULL-terminated string to write to the file.
 *
 *Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t t_length;
	ssize_t written;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		t_length = 0;
		while (text_content[t_length])
			t_length++;

		written = write(fd, text_content, t_length);
		if (written != t_length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
