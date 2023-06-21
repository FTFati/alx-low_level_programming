#include <stdio.h>

/**
* main - Prints the sum of all multiples of 3 or 5 up to 1024
*
* Return: Always (Success)
*/
int main(void)
{
	int n, m = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			m += n;
		}

		n++;
	}

	printf("%d\n", m);
	return (0);
}
