#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of a list
 * @head: double pointer to list
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux, *tmp;
	unsigned int count = 0;

	if (!*head)
		return (-1);
	aux = *head;
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
	free(aux);
	aux = NULL;
	return (1);
}
