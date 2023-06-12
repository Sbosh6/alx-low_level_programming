#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _atoi - converts a string type to nan integer type
 * @s: string to be converted
 *
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int x, y, z, len, a, d;

	x = 0;
	y = 0;
	z = 0;
	len = 0;
	a = 0;
	d = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && a == 0)
	{
		if (s[x] == '-')
			++y;

	if (s[x] >= '0' && s[x] <= '9')
	{
		d = s[x] - '0';
		if (y % 2)
			d = -d;
		z = z * 10 + d;

		a = 1;

		if (s[x + 1] < '0' || s[x + 1] > '9')
			break;
		a = 0;
	}
	x++;

	}

	if (a == 0)
		return (0);

	return (z);
}

/**
 * main - function to multiply two numbers
 * @argc: argument count
 * @argv: an array of arguments
 * Return: return zero 0r one to indicate error
 */

int main(int argc, char *argv[])
{
	int multiplication, no1, no2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	no1 = _atoi(argv[1]);
	no2 = _atoi(argv[2]);
	multiplication = no1 * no2;

	printf("%d\n", multiplication);

	return (0);
}





