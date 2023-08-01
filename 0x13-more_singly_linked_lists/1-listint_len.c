#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function returns the num of elem in a linked list
 * @h: Pointer
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		++count;
	}
	return (count);
}
