#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: pointer to list
 * @n: pointer to data.
 *
 * Return: address of the new elemnt created
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
