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
 * add_node - function that adds a new node at the beginning of a list
 * @head: pointer to list
 * @str: pointer to string.
 *
 * Return: address of the new elemnt created
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
