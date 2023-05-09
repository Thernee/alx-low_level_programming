#include "main.h"

/**
 * str_len - counts the length of a string
 *
 * @str: string to be counted
 * Return: length of the string
 */
int str_len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * read_textfile - reads a text file and prints it to the POSIX std o
 *
 * @filename: pointer to the file
 * @letters: Number of letters to be read
 * Return: The actual number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_ptr;
	char *str;
	ssize_t holder = 0;
	size_t len = 0;

	if (filename == NULL || letters == 0)
		return (0);

	file_ptr = fopen(filename, "r");
	if (file_ptr == NULL)
		return (0);

	str = malloc(sizeof(char) * letters + 1);
	if (str == NULL)
	{
		fclose(file_ptr);
		return (0);
	}
	while (fgets(str, letters + 1, file_ptr) != NULL)
	{
		len  = str_len(str);
		if (len > 0 && str[len - 1] == '\n')
		{
			str[len - 1] = '\0';
			len--;
		}

		holder += printf("%s", str);
		if (holder < 0)
			break;
		if (holder >= (ssize_t)letters)
			break;
	}
	free(str);
	fclose(file_ptr);


	return (holder);
}
