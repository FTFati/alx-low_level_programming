#include <stdio.h>
/**
* main - function that prints the number of arguments passed into it
* @argc: number of arguments passed
* @argv: arguments passed here
* Return: 0
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
