#include <stdio.h>
#include <string.h>
/**
 * *_strcpy - prints every other charecter
 * @dest : char is a parameter
 * @src : char is a parameter
 *
 * Return: char returned
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

