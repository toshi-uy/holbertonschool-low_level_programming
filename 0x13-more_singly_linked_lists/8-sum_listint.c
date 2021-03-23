#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a list
 * @head: pointer to head.
 *
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	listint_t *aux = head;
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
