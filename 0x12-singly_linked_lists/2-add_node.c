#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: pointer to pointer to head
 * @str: string pointer
 * Return: Address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int count;

	for (count = 0; str[count] != '\0'; count++);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = count;
	new_node->next = *head;

	*head = new_node;
	return (*head);
}
