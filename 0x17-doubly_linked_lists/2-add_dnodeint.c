#include "lists.h"
/**
 * add_dnodeint- function that adds a new node at the beginning of a list
 * @head: a pointer to the head
 * @n:The integer
 * Rerturn: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_mem;

	new_mem = malloc(sizeof(dlistint_t));

	if (new_mem == NULL)
		return (NULL);

	new_mem->n = n;
	new_mem->prev = NULL;
	new_mem->next = *head;

	if (*head != NULL)
		(*head)->prev = new_mem;
	*head = new_mem;

	return (new_mem);
}
