#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: Pointer to the bit
 * @index: Index to set the value at - indices starts at 0
 * Return: if error occurs -1, otherwise 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
