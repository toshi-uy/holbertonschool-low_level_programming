#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: pointer to list
 * @n: pointer to data.
 *
 * Return: address of the new elemnt created
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new, *aux;
	unsigned int count = 0;

	if (!head)
		return (NULL);
	aux = head;
	if (index == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = head->n;
		new->next = aux;
		new->prev = NULL;
		head = new;
		return (new);
	}
	while (aux)
	{
		if (index - 1 == count)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = aux->next->n;
			new->next = aux->next;
			new->prev = aux->prev;
			aux->next = new;
			return (new);
		}
		count++;
		aux = aux->next;
	}
	return (NULL);
}
