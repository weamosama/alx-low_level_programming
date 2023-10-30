#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 *append_text_to_file - Appends text at the end of a file.
 *@filename: The name of the file.
 *@text_content: A NULL-terminated string to append to the file.
 *
 *Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, text_length, bytes_written;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_length = 0;
		while (text_content[text_length])
			text_length++;

		bytes_written = write(file_descriptor, text_content, text_length);
		if (bytes_written != text_length)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
