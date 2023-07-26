#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: Pointer to name of the file to be created
 * @text_content: Pointer to string to write
 * Return: if function fails -1, otherwise 1
 */

int create_file(const char *filename, char *text_content)
{
	int jk, n, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	jk = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(jk, text_content, len);

	if (jk == -1 || n == -1)
		return (-1);

	close(jk);

	return (1);
}
