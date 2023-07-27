#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: pointer to head
 * @str: string pointer
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *new, *ptr;
	unsigned int i = 0;

	new = malloc(sizeof(list_t));
	if (new)
	{
		while (*(str + i))
			i++;
		new->str = strdup(str);
		if (new->str)
		{
			new->len = i;
			new->next = NULL;
			if (!*head)
			{
				*head = new;
				return (new);
			}
			ptr = *head;
			while (ptr->next)
				ptr = ptr->next;
			ptr->next = new;
			return (new);
		}
		free(new);
		return (NULL);
	}
	return (NULL);
}
