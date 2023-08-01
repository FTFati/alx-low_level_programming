#include "lists.h"
#include <stdio.h>
/**
 * free_listint - function that frees a listint_t list
 * @head: Pointer to a struct
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
