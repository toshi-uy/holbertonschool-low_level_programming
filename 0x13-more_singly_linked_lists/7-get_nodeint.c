#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @index: parameter index
 * @head: pointer to list
 *
 * Return: returns the nth node of a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (0);
}
