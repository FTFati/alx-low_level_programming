#include <stdio.h>
#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1
 * @n: pointer
 * @index: index starting from 0 of the bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;
	unsigned long int c;

	size = sizeof(*n) * 8 - 1;

	if (index > size)
		return (-1);

	c = 1 << index;

	*n = c | *n;

	return (1);
}
