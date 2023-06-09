#include "main.h"

/**
 * factorial - function to return factorial of
 * a given number.
 * @n: number to obatain it's factorial.
 * Return: returns a factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
