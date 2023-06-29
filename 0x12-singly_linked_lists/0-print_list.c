#include <stdio.h>
#include "lists.h"

/**
 * print_list - it prints all the elements of the linked list
 * @h: is a ponter to size_t
 *
 * Return: returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}

	return (x);
}


