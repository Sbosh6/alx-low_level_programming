#include "main.h"

int real_prime(int n, int y);

/**
* is_prime_number - indicates if an integer
* is a prime number.
* @n: number to check.
* Return: returns 1 if n is aprime number
* 0 if not.
*/

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (real_prime(n, n - 1));
}
}

/**
* real_prime - finds out if a number is
* a prime number.
* @n: number to check.
* @y: is the iterator.
* Return: returns 1 if n is a prime
* returns 0 if not.
*/

int real_prime(int n, int y)
{

if (y == 1)
{
return (1);
}
if (n % y == 0 && y > 0)
{
return (0);
}
else
{
return (real_prime(n, y - 1));
}
}

