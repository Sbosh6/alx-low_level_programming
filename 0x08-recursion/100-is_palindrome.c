#include "main.h"

int read_paladm(char *s, int x, int length);
int _strlen_recursion(char *s);

/**
* is_palindrome - tests if the string
* is a palindrome.
* @s: is a string to reverse
* Return: 1 if string is a palidrome
* 0 otherwise.
*/

int is_palindrome(char *s)
{
if (*s == 0)
{
return (1);
}
else
{
return (read_paladm(s, 0, _strlen_recursion(s)));
}
}
/**
*  _strlen_recursion - counts and returns the
*  length of a string.
*  @s: Is the string which it's
*  length is required.
*  Return: returns the length of the
*  string.
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 +  _strlen_recursion(s + 1));
}
}

/**
* read_paladm - sacns the characters to check
* for palidrome.
* @s: is a string to scan.
* @x: iterator.
* @length: is the length of a string.
* Return: returns 1 if a string is a palidrome
* 0 if otherwise
*/

int read_paladm(char *s, int x, int length)
{
if (*(s + x) != *(s + length - 1))
{
return (0);
}
if (x >= length)
{
return (1);
}
else
{
return (read_paladm(s, x + 1, length - 1));
}
}
