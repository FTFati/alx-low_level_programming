#include "main.h"

/**
* puts_half - function that prints half of a string
* @str: char type
* Return: void
*/
void puts_half(char *str)
{
	int i, len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	if (len % 2 != 0)
		len = (len + 1) / 2;
	else
		len /= 2;
	while (len < i)
	{
		len++;
		_putchar(*(str + len - 1));
	}
	_putchar('\n');
}
