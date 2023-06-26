#include "main.h"

/**
* _strlen - that returns the length of a string
* @s : char
* Return: int i
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
