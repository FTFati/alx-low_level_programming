#include "main.h"

/**
* swap_int - function swaps the values of two integers.
* @x: 1st argument int type
* @y: 2nd argument int type
* Return: void
*/
void swap_int(int *x, int *y)
{
	int a;

	a = *x;
	*x = *y;
	*y = a;
}
