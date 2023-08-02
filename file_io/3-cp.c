#include "main.h"
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUF_SIZE 1024
/**
 * print_error - prints error message to stderr
 *
 * @msg: message to print
 */
void print_error(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
}

/**
 * read_from_file - Reads from the source and writes on destination
 *
 * @file_from: Source file descriptor
 *
 * @file_to: Destination file descriptor
 *
 * Return: 1 if success, -1 on fail
 */
int read_from_file(int file_from, int file_to)
{
	ssize_t read_result, write_result;
	char buffer[BUF_SIZE];

	while ((read_result = read(file_from, buffer, BUF_SIZE)) > 0)
	{
		write_result = write(file_to, buffer, read_result);
		if (write_result == -1 || write_result != read_result)
		{
			print_error("Error: Can't write to file");
			return (-1);
		}
	}

	return (read_result);
}

/**
 * copy_file - copies content of file to another file
 *
 * @file_from: Source file descriptor
 *
 * @file_to: Destination file descriptor
 *
 * Return: 0 on success, personalized error code on fail
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t result;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to);
		close(fd_from);
		return (99);
	}

	result = read_from_file(fd_from, fd_to);

	if (result == -1)
	{
		close(fd_from);
		close(fd_to);
		return (99);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		print_error("Error: Can't close fd");
		dprintf(STDERR_FILENO, "%d", (fd_from == -1) ? fd_from : fd_to);
		return (100);
	}
	return (0);
}

/**
 * main - entry point of program
 *
 * @argc: number of arrays
 *
 * @argv: array of arguments
 *
 * Return: 0 on success, 97 on fail
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		return (97);
	}

	return (copy_file(argv[1], argv[2]));
}
