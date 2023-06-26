#include "main.h"
/**
* print_array - function with two argument
* @a: first argument pointer int type
* @b: second argument int type
* Return: void
*/
void print_array(int *a, int b)
{
	int i;

	for (i = 0; i < b; i++)
	{
		printf("%d", *(a + i));
		if (i < b - 1)
			printf(", ");
	}
	printf("\n");
}
