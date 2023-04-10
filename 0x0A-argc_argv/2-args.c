#include "main.h"
#include <stdio.h>

/**
 * main - args content 
 * @argc: counts argument
 * @argv: vectors argument
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}

	return (0);
}
