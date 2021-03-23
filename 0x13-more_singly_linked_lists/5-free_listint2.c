#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: pointer to list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	tmp = *head;
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
