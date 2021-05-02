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

	if (!h)
		return (NULL);
	aux = *h;
	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->prev = NULL;
		new->next = aux;
		*h = new;
		return (new);
	}
	while (aux)
	{
		if (idx - 1 == count)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->prev = aux;
			new->next = aux->next;
			aux->next = new;
			if (aux->next != NULL)
				aux->next->prev = new;
			return (new);
		}
		count++;
		aux = aux->next;
	}
	return (NULL);
}
