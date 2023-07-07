#include "main.h"

/**
 * binary_to_uint - it converts the binary number to unsigned int.
 * @b: it is containing the binary number
 *
 * Return: returns the number we converted
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int value = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
		{
			return (0);
		}
		value = 2 * value + (b[x] - '0');
	}

	return (value);
}

