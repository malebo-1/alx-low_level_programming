#include "main.h"

/**
 * _strpbrk - The Entry point
 * @n: The input
 * @accept: The second input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *n, char *accept)
{
	int j

	while (*n)
	{
		for (j = 0; accept[j]; j++)
		{
		if (*n == accept[j])
		return (n);
		}
	n++;
	}

	return ('\0');
}
