#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - function that creates an array of integers
 * @min: int type
 * @max: int type
 * Return:  Pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int arr;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	arr = 0;
	while (min <= max)
	{
		p[arr] = min;
		min++;
		arr++;
	}
	return (p);
}
