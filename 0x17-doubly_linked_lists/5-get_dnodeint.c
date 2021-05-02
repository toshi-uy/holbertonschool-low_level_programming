#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a double list
 * @head: pointer to list head
 * @index: pointer to index.
 *
 * Return: address of the nth node of a double linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}
	while (aux)
	{
		if (i == index)
			return (aux);
		aux = aux->next;
		i++;
	}
	return (NULL);
}
