#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - function deletes the node at index
 * @head: Pointer
 * @index: Index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *p;

	if (!tmp)
		return (-1);
	while (*head && index)
	{
		if (!tmp)
			return (-1);
		if (i == index - 1)
			break;
		tmp = tmp->next;
		++i;
	}
	if (index)
	{
		p = tmp->next->next;
		free(tmp->next);
		tmp->next = p;
	}
	else
	{
		*head = (*head)->next;
		free(tmp);
	}
	return (1);
}
