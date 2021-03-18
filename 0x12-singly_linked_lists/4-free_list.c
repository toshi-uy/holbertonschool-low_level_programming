#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp = head, *tmp_next;

	if (head)
	{
		tmp_next = head->next;
		while (tmp_next)
		{	free(tmp->str);
			free(tmp);
			tmp = tmp_next;
			tmp_next = tmp_next->next;
		}
		free(tmp->str);
		free(tmp);
	}
}
