#include "main.h"

/**
* puts2 - function that prints every other char of a str
* @str: char type
* Return: Void
*/
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
