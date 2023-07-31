#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - function that reads a text file and prints to POSIX
 *
 * @filename: name of the file to read
 * @letters: number of letters to read
 *
 * Return: number of letters to be read and printed, 0 or NULL otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, read_result, write_result;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	read_result = read(file_descriptor, buffer, letters);
	if (read_result == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	write_result = write(STDOUT_FILENO, buffer, read_result);
	if (write_result == -1 || (size_t)write_result != (size_t)read_result)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (read_result);
}
