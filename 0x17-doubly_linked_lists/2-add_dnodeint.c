#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: pointer to list
 * @n: pointer to data.
 *
 * Return: address of the new elemnt created
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
