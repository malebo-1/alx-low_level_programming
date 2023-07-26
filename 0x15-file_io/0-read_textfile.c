#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A function that reads textfile
 * @filename: The textfile to be read
 * @letters: The num of letters
 * Return: n, number of bytes read otherwise 0 func fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t jk;
	ssize_t n;
	ssize_t i;

	jk = open(filename, O_RDONLY);
	if (jk == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	i = read(jk, buf, letters);
	n = write(STDOUT_FILENO, buf, i);

	free(buf);
	close(jk);
	return (n);
}
