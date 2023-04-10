#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Sum of args positive numbers
 * @argc: counts argument
 * @argv: vectors argument
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int n;
	unsigned int k, sum = 0;
	char *j;

	if (argc > 1)
	{
		for (n = 1; n < argc; n++)
		{
			j = argv[n];

			for (k = 0; k < strlen(j); k++)
			{
				if (j[k] < 48 || j[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(j);
			j++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
