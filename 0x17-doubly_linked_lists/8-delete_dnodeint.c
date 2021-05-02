#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index of a list
 * @head: pointer to header
 * @index: index where to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head, *tmp;
	unsigned int count = 0;

	if (!*head)
		return (-1);
       	if (index == 0)
	{
		*head = aux->next;
		free(aux);
		aux = NULL;
		return (1);
	}
	while (count < index)
	{
		if (aux->next)
		{
			tmp = aux;
			aux = aux->next;
		}
		else
			return (-1);
		count++;
	}
	tmp->next = aux->next;
	tmp->prev = aux->prev;
	free(aux);
	aux = NULL;
	return (1);
}
