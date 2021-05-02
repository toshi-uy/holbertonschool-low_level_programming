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
	dlistint_t *new = NULL, *aux = *h, *aux2 = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (!h)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = aux;
		aux->prev = new;
		*head = new;
	}
	while (idx != 1 && != 0)
	{
		aux = aux->next;
		idx--;
	}
	if (aux->next == NULL)
	{
		aux->next = new;
		new->prev = aux;
	}
	else
	{
		aux2 = aux->next;
		aux->next = new;
		aux2->prev = new;
		new->next = aux2;
		new->prev = aux;
		return (new);
	}
	free(new);
	return (NULL);
}
