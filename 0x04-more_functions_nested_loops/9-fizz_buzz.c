#include <stdio.h>

/**
* main -prints the numbers from 1 to 100, for mult of 3 and 5 print fizz Buzz
*
* Return: Always 0.
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) || (i % 5)) == 0)
			printf("FizzBuzz");

		else if ((i % 3) == 0)
			printf("Fizz");

		else if ((i % 5) == 0)
			printf("Buzz");

		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}

	printf("\n");

	return (0);
}
