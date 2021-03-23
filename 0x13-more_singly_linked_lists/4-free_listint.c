#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: pointer to list
 *
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	if (!head)
		free(tmp);
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	head = NULL;
}
