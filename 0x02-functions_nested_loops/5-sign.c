#include "main.h"
/**
 * print_sign - prints the sign of a number
 * greater than, equal to or less than zero
 *
 * @j: The input number as an integer.
 *
 * Return: 1 > 0. 0 is zero
 * -1 is less than zero.
 */
int print_sign(int j)
{
	if (j > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (j < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
