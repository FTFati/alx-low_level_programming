#include "main.h"
/**
* cap_string - function that capitalizes all words of a string
* @c: string with words to capitalize
* Return: pointer to resulting string
*/
char *cap_string(char *c)
{
	char *p = c;
	int i;
	char a[] = " \t\n,.!?\"(){}";
	int j = 1;

	while (*c)
	{
		if (j && *c >= 'a' && *c <= 'z')
			*c -= 32;
		j = 0;
		for (i = 0; i < 12; i++)
		{
			if (*c == a[i])
				j = 1;
		}
		c++;
	}
	return (p);
}
