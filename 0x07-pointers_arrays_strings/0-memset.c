#include "main.h"
/**
* _memset - function that fills memory with a constant byte
* @s: pointer to start of memory area
* @b: constant byte to fill with
* @n: num bytes to fill in
* Return: pointer @s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
