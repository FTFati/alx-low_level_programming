#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - function that deletes the head node of a list
 * @head: Pointer
 * Return: Head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i = 0;

	if (*head)
	{
		i = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
		return (i);
}
