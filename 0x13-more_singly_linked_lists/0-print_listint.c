#include "lists.h"
/**
 * print_listint - function that prints all the elements of a list
 * @h: h parameter.
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
