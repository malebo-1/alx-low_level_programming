#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings of any size
 * @s1: the first string
 * @s2: the second string
 *
 * Return: two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, n = 0, y = 0, f = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[n])
		n++;

	f = i + n;
	s = malloc((sizeof(char) * f) + 1);

	if (s == NULL)
		return (NULL);

	n = 0;

	while (y < f)
	{
		if (y <= i)
			s[y] = s1[y];

		if (y >= i)
		{
			s[y] = s2[n];
			n++;
		}

		y++;
	}

	s[y] = '\0';
	return (s);
}
