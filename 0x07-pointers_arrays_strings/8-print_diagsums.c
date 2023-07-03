#include "main.h"
/**
* print_diagsums - function that prints the sum of diagonals of a square matrix
* @a: pointer to 2D array
* @size: which diagonal to add
* Return: Void
*/

void print_diagsums(int *a, int size)
{
	int i, sumx, sumy;

	sumx = sumy = 0;
	for (i = 0; i < (size * size); i += size + 1)
		sumx += a[i];
	for (i = size - 1; i < (size * size - 1); i += size - 1)
		sumy += a[i];
	printf("%d, %d\n", sumx, sumy);
}
