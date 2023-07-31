#include "main.h"
/**
 * create_file - function that creates a file
 *
 * @filename: name of the file
 *
 * @text_content: content of the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1);
	}

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
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
