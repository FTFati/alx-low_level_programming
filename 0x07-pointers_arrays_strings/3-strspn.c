#include "main.h"
/**
* _strspn - function that gets the length of a prefix substring
* @s: string to check
* @accept: substring of chars
* Return: the number of bytes in the initial segment of @s
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int a = 0;
	int b;

	while (*s)
	{
		i = 0;
		b = a;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				a++;
			i++;
		}
		if (b == a)
			break;
		s++;
	}
	return (a);
}
