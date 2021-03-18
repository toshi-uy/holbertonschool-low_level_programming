#include "lists.h"

/**
 * _strlen - counts strings
 * @s: parameter s
 *
 * Description: counts string characters
 *
 * Return: Count
 */

unsigned int _strlen(const char *s)
{
	int count = 0;

	if (s == NULL)
		return (0);
	while (*(s + count))
	{
		count++;
	}
	return (count);
}

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: pointer to list
 * @str: pointer to string.
 *
 * Return: address of the new elemnt created
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *temp;

	if (!head)
		return (0);
	temp = *head;
	end = malloc(sizeof(list_t));
	if (end == NULL)
	{
		return (NULL);
	}
	end->str = strdup(str);
	end->len = _strlen(str);
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = end;
	return (end);
}
