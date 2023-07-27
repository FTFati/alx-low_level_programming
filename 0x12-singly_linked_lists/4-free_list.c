#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - function that frees a list
 * @head: pointer
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}
