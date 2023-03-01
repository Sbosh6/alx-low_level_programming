#include <stdio.h>
#include <string.h>
/**
 * print_rev - returns string length
 * @s : char is a parameter
 */
void print_rev(char *s)
{
int len = strlen(str);
for (int i = len - 1; i >= 0; i--) {
printf("%c", str[i]);
}
printf("\n");
}
