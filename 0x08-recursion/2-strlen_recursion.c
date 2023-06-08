#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion - entry point.
* @s: pointer to a string.
* Return: the length of a string.
*/


int _strlen_recursion(char *s)
{
int length = 0;

while (*s != '\0')
length++;
return (length);
}


