#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - function that prints a list
 * @head: Pointer
 * Return: Number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head && head > head->next)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		++count;
	}
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		++count;
	}
	return (count);
}
