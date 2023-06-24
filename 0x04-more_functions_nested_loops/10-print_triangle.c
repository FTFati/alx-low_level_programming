#include "main.h"

/**
*print_triangle - prints a triangle Use the character #
*@size: The charater to print
* Return: void
*/
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a < size; a++)
		{
			for (b = size - a; b > 1; b--)
			{
				_putchar(32);
			}
			for (c = 0; c <= a; b++)
			{
				_putchar(35);
			}
		}
	}
	_putchar('\n');
}
