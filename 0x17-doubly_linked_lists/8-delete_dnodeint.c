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
	dlistint_t *aux = *head, *tmp = NULL;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = aux->next;
		if (aux->next != NULL)
			aux->next->prev = NULL;
		free(aux);
		return (1);
	}
	for (i = 0; aux != NULL && i < index - 1; i++)
	{
		if (aux == NULL || aux->next == NULL)
			return (-1);
		aux = aux->next;
	}
	tmp = aux->next->next;
	if (aux->next->next != NULL)
		aux->next->next->prev = aux;
	free(aux->next);
	aux->next = tmp;
	return (1);
}
