#include <stdio.h>
#include "main.h"
/**
 * print_binary - function that prints binary form of a num
 * @n: long int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	signed long int size;
	char c;
	int flag = 0;

	size = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	if (n == 1)
	{
		printf("1");
		return;
	}

	while (size >= 0)
	{
		c = (n >> size) & 1;

		if (flag == 1)
			putchar(c + '0');
		else
		{
			if (c == 1)
			{
				putchar(c + '0');
				flag = 1;
			}
		}

		size -= 1;
	}
}
