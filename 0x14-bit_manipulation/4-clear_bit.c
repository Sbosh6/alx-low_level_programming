#include "main.h"

/**
 * clear_bit - It sets the value of a bit to zero
 * @n: is the pointer pointing number to change
 * @index: index of the bit to clear
 *
 * Return: returns 1 else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}


