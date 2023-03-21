#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int k;
	int m;

	for (m = 1; k <= 10; k++)
	{
		for (m = 97; m <= 122; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
