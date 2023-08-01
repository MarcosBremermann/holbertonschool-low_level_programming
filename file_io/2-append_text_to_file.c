#include "main.h"
/**
 * append_text_to_file - function that appends text to end of file
 *
 * @filename: name of the file
 *
 * @text_content: content to append to the file
 *
 * Return: 1 on success, -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result;

	if (filename == NULL)
	{
		return (-1);
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		size_t text_length = 0;

		while (text_content[text_length])
		{
			text_length++;
		}

		write_result = write(file_descriptor, text_content, text_length);
		if (write_result == -1 || (size_t)write_result != text_length)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
