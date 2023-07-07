#include "main.h"

/**
 * get_bit - returns he value of a  bit
 * @n: number to search
 * @index: index of the bit
 *
 * Return: returns the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}

