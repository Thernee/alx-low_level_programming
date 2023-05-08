#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of the file
 * @text_content: content to save in the file
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int count = 0, i, holder = 0;
	int w_bits;

	if (filename == NULL)
		return (-1);

	holder  = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (holder == -1)
		return (-1);

	for (i = 0; text_content && text_content[i]; i++)
	{

	}

	w_bits = write(holder, text_content, count);
		if (w_bits < 0)
			return (-1);

	close(holder);

	return (1);
}
