#include "main.h"

/**
 * append_text_to_file - A function that appends text
 * @filename: Pointer to file name
 * @text_content: String to be added at the end
 * Return: -1 if file function fail, -1 if it doesn't exist otherwise 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int j, n, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	j = open(filename, O_WRONLY | O_APPEND);
	n = write(j, text_content, len);

	if (j == -1 || n == -1)
		return (-1);
	close(j);

	return (1);
}
