#include "main.h"
#include <stdio.h>

/**
 * main - function that prints number of args
 * @argc: counts argumet
 * @argv: vectors argument
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
