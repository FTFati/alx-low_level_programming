#include "main.h"
/**
* _memcpy - function that copies memory area
* @dest: A pointer to the memory area to copy @src into.
* @src: The source buffer to copy characters from.
* @n: The number of bytes to copy from @src.
* Return: A pointer @dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *start = dest;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (start);
}
