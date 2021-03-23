#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: head pointer.
 * @n: parameter n.
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current = *head;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = *head;
	*head = current;
	free(current);
	return (*head);
}
