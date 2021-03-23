#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a position
 * @head: double pointer to list
 * @idx: index
 * @n: data parameter n.
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux, *new;
	unsigned int count = 0;

	if (!head)
		return (NULL);
	aux = *head;
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = aux;
		new = *head;
	}
	while (aux)
	{
		if (idx - 1 == count)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = aux->next;
			aux->next = new;
			return (new);
		}
		count++;
		aux = aux->next;
	}
	return (NULL);
}
