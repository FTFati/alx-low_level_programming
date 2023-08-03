#include <stdio.h>
#include "main.h"
/**
 * flip_bits - func returns bits to flip to get from num to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int size;
	unsigned long int flipp = 0;
	unsigned long int i = 0;

	size = sizeof(n) * 8 - 1;

	while (i <= size)
	{
		if ((n & 1) != (m & 1))
			flipp++;

		n = n >> 1;
		m = m >> 1;

		i++;
	}

	return (flipp);

}
