#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: content to save in the file
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int count = 0, i, holder = 0;
	int w_bits;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL || !text_content[0])
		return (1);

	holder  = open(filename, O_RDWR | O_APPEND);
	if (holder == -1)
		return (-1);

	for (i = 0; text_content && text_content[i]; i++)
	{
		count++;
	}

	w_bits = write(holder, text_content, count);
	if (w_bits < 0)
		return (-1);

	close(holder);

	return (1);
}
