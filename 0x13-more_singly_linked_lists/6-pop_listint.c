#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to list
 *
 * Return: nothing
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *next_node = NULL;

	if (*head == NULL)
	{
		return (0);
	}
	next_node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = next_node;

	return (n);
}
