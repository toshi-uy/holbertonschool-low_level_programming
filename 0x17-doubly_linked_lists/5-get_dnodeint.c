#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: pointer to list head
 * @index: pointer to index.
 *
 * Return: address of the nth node of a double linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;

	if (!head)
	{
		return (NULL);
	}
	while (index != 0)
	{
		aux = aux->next;
		index--;
	}
	return (aux);
}
