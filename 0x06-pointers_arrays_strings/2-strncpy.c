#include "main.h"
/**
* _strncpy - function that copies a string
* @dest: pointer to the string
* @src: pointer to the string to copy
* @n: Number of bytes to copy
* Return: Pointer to @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i]	= src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
