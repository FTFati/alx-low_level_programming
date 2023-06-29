#include "main.h"
/**
* string_toupper - change all lowercase letters of a string to uppercase
* @a: string to transform
* Return: pointer to transformed string
*/
char *string_toupper(char *a)
{
	char *b = a;

	while (*a)
	{
		if (*a >= 'a' && *a <= 'z')
			*a -= 32;
		a++;
	}
	return (b);
}
