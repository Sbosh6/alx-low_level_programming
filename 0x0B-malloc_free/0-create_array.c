#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to create an array of
 * specific size and assign it to char
 * @size: the size of an array
 * @c: the char to assign
 * Return: returns a pointer to an array or null if
 * it fails
 */
char *create_array(unsigned int size, char c)
{
	char *chars;
	unsigned int x;

	chars = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (chars == NULL)
	{
		return (0);
	}

	for (x = 0; x < size; x++)
		chars[x] = c;
	return (chars);
}
