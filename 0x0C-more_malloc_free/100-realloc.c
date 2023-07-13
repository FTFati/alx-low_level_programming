#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - function reallocates a memory  using malloc and free
 * @ptr: pointer to the memory previosly allocated with malloc
 * @old_size: The size of the allocated space of ptr
 * @new_size: The new size to allocate
 * Return: Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size > old_size)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
