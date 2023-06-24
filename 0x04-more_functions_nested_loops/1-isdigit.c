#include "main.h"

/**
* _isdigit - write a function that check for a digit
* @c: char to check
* Return: 1 if c is a digit, Returns 0 otherwise
**/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
