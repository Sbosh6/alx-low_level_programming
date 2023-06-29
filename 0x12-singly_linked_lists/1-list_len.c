#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function to return number of elements
 * @h: pointer that is pointing to list_t list
 *
 * Return: returns number of elements stored in h
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}

