#include "main.h"
/**
* _strcmp - function that compares two strings
* @s1: string 1
* @s2: string 2
* Return: Same 0, Different s1 - s2
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 - *s2 != 0)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
