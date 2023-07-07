#include "main.h"

/**
 * set_bit - It set a bit at an index to 1
 * @n: Is a pointer to a number we are to change
 * @index: is the index of the bit
 *
 * Return: returns 1 else returns -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

