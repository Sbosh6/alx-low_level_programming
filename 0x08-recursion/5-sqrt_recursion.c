#include "main.h"

int real_sqrt_recursion(int n, int x);

/**
 * _sqrt_recursion - returns the square
 * root of a natural number.
 * @n: the number which it's square
 * root is required.
 * Return: returns te square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (real_sqrt_recursion(n, 0));
	}
}

/**
 * real_sqrt_recursion - finds the square root
 * of a natural number.
 * @n: the number which its square
 * root is required.
 * @x: is the iterator.
 * Return: returns the square root.
 */

int real_sqrt_recursion(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	else
	{
	return (real_sqrt_recursion(n, x + 1));
	}
}

