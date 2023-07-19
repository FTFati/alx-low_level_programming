#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - func  executes a func as a parameter on each elem of array
* @array: array of integers
* @size: size of array
* @action: function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
