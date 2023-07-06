#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: The bit
 * @index: Index to get the value - indices starts at 0
 * Return: if error occurs -1, otherwise value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;

	return (bit_val);
}
