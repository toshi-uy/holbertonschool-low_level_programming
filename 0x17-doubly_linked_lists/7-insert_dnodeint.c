#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a node at a given position
 * @h: pointer to list header
 * @idx: index to insert
 * @n: pointer to data.
 *
 * Return: address of the new elemnt created
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux, *new;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->next = NULL;
	new->n = n;
	aux = *h;
	if (idx == 0)
	{
		if (*h == NULL)
		{
			*h = new;
		}
		else
		{
		new->next = *h;
		aux->prev = new;
		*h = new;
		}
		return (new);
	}
	for (count = 0; aux->next != NULL || count + 1 == idx; count++)
	{
		if (count + 1 == idx)
		{
			if (aux->next != NULL)
				aux->next->prev = new;
			new->next = aux->next;
			aux->next = new;
			new->prev = aux;
			return (new);
		}
		aux = aux->next;
	}
	free(new);
	return (NULL);
}
