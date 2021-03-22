#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: head pointer
 * @n: value of list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *current;

	current = *head;
	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while (current->next)
        {
                current = current->next;
        }
	current->next = end;
	return (end);
}
