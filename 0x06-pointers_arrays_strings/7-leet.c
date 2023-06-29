#include "main.h"
/**
* leet - function that encodes a string into 1337
* @a: string to encode
* Return: pointer to encoded string
*/
char *leet(char *a)
{
	char *s = a;
	char b[] = { 'a', 'e', 'o', 't', 'l' };
	char c[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*a)
	{
		for (i = 0; i < 5; i++)
		{
			if (*a == b[i] || *a == b[i] - 32)
				*a = c[i] + '0';
		}
		a++;
	}
	return (s);
}
