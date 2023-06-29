#include "main.h"
/**
* _strncat - function that concatenates two strings
* @dest: string ,modified
* @src: string concatenated to @dest
* @n: amount of bytes used from src.
* Return: the pointer to @dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int count1 = 0;
	int count2 = 0;

	while (*(dest + count1) != '\0')
	{
		count1++;
	}

	while (count2 < n)
	{
		*(dest + count1) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count1++;
		count2++;
	}
	return (dest);
}
