#include "main.h"

/**
* _print_rev_recursion - function like puts
* @s: Is the entry value
*/

void _print_rev_recursion(char *s)
{
if (*s)
{

_print_rev_recursion(s + 1);
_putchar(*s);
}
}

