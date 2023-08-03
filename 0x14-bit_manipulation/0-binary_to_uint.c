#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - function that converts a binary to int
 * @b: binary string
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;
	unsigned int i;

	for (dec = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			dec = (dec << 1) | 1;
		else if (b[i] == '0')
			dec <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (dec);
}
