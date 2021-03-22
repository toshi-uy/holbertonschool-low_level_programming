#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list and
 * returns its data (n).
 * @head: pointer to list
 *
 * Return: the head nodes data (n)
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
