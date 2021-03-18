#include "lists.h"

/**
 * print_list - check the code for Holberton School students.
 *
 * Return: count.
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while(h)
	{
		count++;
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
