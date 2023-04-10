#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Two args numbers multiplication
 * @argc: counts argument
 * @argv: vectors argument
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int j1 = 0, j2 = 0;

	if (argc == 3)
	{
		j1 = atoi(argv[1]);
		j2 = atoi(argv[2]);
		printf("%d\n", j1 * j2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
