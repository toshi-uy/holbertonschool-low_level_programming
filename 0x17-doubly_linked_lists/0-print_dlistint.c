#include "lists.h"

/**
 * print_dlistint - function that prints the elements of a double linked list
 * @h: pointer to header
 *
 * Return: the number of nodes of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
