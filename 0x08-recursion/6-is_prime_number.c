#include "main.h"
#include <stdio.h>
/**
* prime_finder -function finds out if a number is prime recursively
* @x: number to determine if prime
* @y: number to check if divisor
* Return: prime
*/
int prime_finder(int x, int y)
{
	if (x == y)
		return (1);
	if (!(x % y))
		return (0);
	return (prime_finder(x, y + 1));
}
/**
* is_prime_number - function that returns if a number is prime
* @n: number to determine
* Return: 1 or 0
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_finder(n, 2));
}
