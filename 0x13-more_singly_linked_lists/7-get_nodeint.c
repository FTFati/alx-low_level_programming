#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - function returns the nth node of a list
 * @head: Pointer
 * @index: Index of node
 * Return: nth node of a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		++i;
	}
	return (NULL);
}
