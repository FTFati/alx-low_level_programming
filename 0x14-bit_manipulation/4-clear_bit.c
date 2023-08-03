#include <stdio.h>
#include "main.h"
/**
 * clear_bit - function that sets  0 at a given index
 * @n: pointer
 * @index: index to set to 0
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;
	unsigned long int c;

	size = sizeof(*n) * 8 - 1;

	if (index > size)
		return (-1);

	c = 1 << index;

	*n = *n & ~c;

	return (1);
}
