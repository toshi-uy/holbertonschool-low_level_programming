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

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
