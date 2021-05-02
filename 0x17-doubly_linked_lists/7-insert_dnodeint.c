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

	aux = *h;
	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->prev = NULL;
		if (*h == NULL)
		{
			new->next = NULL;
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
	for (count = 0; aux->next != NULL; count++)
	{
		if (count + 1 == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->prev = aux;
			new->next = aux->next;
			aux->next = new;
			aux->next->prev = new;
			return (new);
		}
		aux = aux->next;
	}
	if (aux->next == NULL && count + 1 == idx)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->prev = aux;
		new->next = NULL;
		aux->next = new;
		return (new);
	}
	return (NULL);
}
