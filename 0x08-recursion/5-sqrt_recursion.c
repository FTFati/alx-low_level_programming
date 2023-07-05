#include "main.h"
#include <stdio.h>
/**
* sqrtn - function evaluates from 1 to n
* @i: equal n
* @j: number that iterates from 1 to n
* Return: result
*/
int sqrtn(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (j * j > i)
		return (-1);
	return (sqrtn(i, j + 1));
}
/**
* _sqrt_recursion - function that returns the natural square root of a number
* @n: Number Integer
* Return: square root
*/
int _sqrt_recursion(int n)
{
	return (sqrtn(n, 1));
}
