#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - function that frees a listint_t list
 * @head: Pointer
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
