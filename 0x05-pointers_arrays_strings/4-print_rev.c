#include <stdio.h>
#include <string.h>
/**
 * print_rev - returns string length
 * @s : char is a parameter
 */
void print_rev(char *s)
{
int len = strlen(s);
int i;
for (i = len - 1; i >= 0; i--)
printf("%c", s[i]);
printf("\n");
}
