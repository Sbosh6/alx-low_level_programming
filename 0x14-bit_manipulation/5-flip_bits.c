#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: returns number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, y = 0;
	unsigned long int recent;
	unsigned long int outsider = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		recent = outsider >> x;
		if (recent & 1)
			y++;
	}

	return (y);
}

