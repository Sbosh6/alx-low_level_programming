#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half charecter
 * @str : char is a parameter
 */
void puts_half(char *str)
{
int len = strlen(str);
int half_len = (len + 1) / 2;
int i;
for (i = half_len; i < len; i++)
printf("%c", str[i]);
printf("\n");
}
