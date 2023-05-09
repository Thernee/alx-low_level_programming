#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_usage - prints error message to standard error
 *
 * @program_name: name of the file
 * Return: nothing
 */
void print_usage(char *program_name)
{
	(void)program_name;

	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}

/**
 * print_error - prints error to the standard error
 * @filename: name of the file
 * @error_msg: error message to be displayed
 * @exit_code: exit code associated with error message
 * Return: nothing
 */
void print_error(char *filename, char *error_msg, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", error_msg, filename);
	exit(exit_code);
}

/**
 * copy_file - copies files from source to the destination
 *
 * @from_filename: pointer to the source
 * @to_filename: pointer to the destination
 * Return: nothing
 */
void copy_file(char *from_filename, char *to_filename)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	fd_from = open(from_filename, O_RDONLY);
	if (fd_from == -1)
	{
		print_error(from_filename, "Can't read from file", 98);
	}

	fd_to = open(to_filename, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_error(to_filename, "Can't write to", 99); /* removed 'file'*/
	}


	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			print_error(to_filename, "Can't write to", 99); /* removed 'file'*/
		}
	}

	if (bytes_read == -1)
	{
		print_error(from_filename, "Can't read from file", 98);
	}

	if (close(fd_from) == -1)
	{
		print_error(NULL, "Can't close fd", 100);
	}

	if (close(fd_to) == -1)
		print_error(NULL, "Can't close fd", 100);
}

/**
 * main - main function
 *
 * @argc: total number of arguments
 * @argv: The string arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_usage(argv[0]);
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
