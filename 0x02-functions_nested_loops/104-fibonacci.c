#include <stdio.h>
#define Const 10000000000
/**
* main - Finds and print the first 98 fib numbers starting with 1 and 2.
* Return: 0
*/
int main(void)
{
	int i = 0, j = 0, a = 1, b = 2;
	int k1, k2, k3, c;

	printf("%d, %d, ", a, b);
	for (c = 2; c < 98; c++)
	{
		if (a + b > Const || j > 0 || i > 0)
		{
			k1 = (a + b) / Const;
			k2 = (a + b) % Const;
			k3 = i + j + k1;
			i = j, j = k3;
			a = b, b = k2;
			printf("%d, %d", j, b);
		}
		else
		{
			k2 = a + b;
			a = b, b = k2;
			printf("%d", b);
		}
		if (c != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
