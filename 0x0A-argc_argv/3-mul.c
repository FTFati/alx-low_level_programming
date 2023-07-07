#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - program that multiplies two numbers
* @argc: number of arguments
* @argv: arguments supplied
* Return: return 1
*/
int main(int argc, char **argv)
{
	int a = 0, b = 0;

	if (argc > 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
