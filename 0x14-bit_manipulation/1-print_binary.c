#include "main.h"

/**
 * print_binary - prints the binary value of a decimal number
 * @n: is the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int recent;

	for (x = 63; x >= 0; x--)
	{
		recent = n >> x;

		if (recent & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}


