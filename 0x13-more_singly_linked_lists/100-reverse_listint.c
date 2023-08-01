#include "lists.h"
#include <stdio.h>
/**
  * reverse_listint -  function that reverses a list
  * @head: Pointer
  * Return: pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *p = *head;

	*head = NULL;
	while (p)
	{
		tmp = tmp->next;
		p->next = *head;
		*head = p;
		p = tmp;
	}
	return (*head);
}
