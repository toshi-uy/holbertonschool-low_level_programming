#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data of a double list
 * @head: pointer to list
 *
 * Return: the sum of all data in the double listed link
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	int sum = 0;

	if (!head)
		return (sum);
	while (head)
	{
		aux = head;
		sum = sum + aux->n;
		head = head->next;
	}
	return (sum);
}
