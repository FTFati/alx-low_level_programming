#include <stdio.h>
#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: int
 * @index: the index, starting from 0 of the bit you want to get
 * Return: bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 8 - 1;

	if (index > size)
		return (-1);

	return ((n >> index) & 1);

}
