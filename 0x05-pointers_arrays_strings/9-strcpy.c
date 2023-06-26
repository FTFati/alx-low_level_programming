#include "main.h"

/**
* _strcpy - function that copies the string pointed to by src
* @dest: 1st argument char type pointer
* @src: 2nd argument char type pointer
* Return: na
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < src[i]; i++)
		dest[i] = '\0';
	return (dest);
}
