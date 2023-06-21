#include <stdio.h>
#define Const 10000000000
/**
* main - Finds and print the first 98 fib numbers starting with 1 and 2.
* Return: 0
*/
int main(void)
{
	int i, a = 0, b = 1, j = 0, c = 2;

	printf("%d, %d", b, c);
	for (i = 2; i < 98; i++)
	{
		if (b + c > Const || a > 0 || j > 0)
		{
			a = j, j = a + j + (b + c) / Const;
			b = c, c = (b + c) % Const;
			printf("%d, %d", j, c);
		}
		else
		{
			b = c, c = b + c;
			printf("%d", c);
		}
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
