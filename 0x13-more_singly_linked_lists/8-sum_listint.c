#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - function returns the sum of all the data (n) of a list
 * @head: Pointer
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
