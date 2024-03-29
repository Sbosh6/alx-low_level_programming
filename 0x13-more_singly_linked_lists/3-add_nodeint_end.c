#include "lists.h"

/**
 * add_nodeint_end - It adds a node at the end of a list
 * @head: Is the pointer to a first element of a linked list
 * @n: Is the data we want to insert in the new element
 *
 * Return: returns a pointer else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

