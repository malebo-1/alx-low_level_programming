#include "main.h"
#include <stdlib.h>

/**
 * create_array - makes an array of chars
 * @size: Size of array
 * @c: char to fill in the array
 *
 * Return: The array filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
	{
		s[n] = c;
	}

	return (s);
}
