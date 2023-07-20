#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - function that prints numbers
 * @separator: thing to print between numbers
 * @n: the number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *p;
	unsigned int i;
	va_list list;

	if (separator == NULL || *separator == 0)
		p = "";
	else
		p = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%d", va_arg(list, int));
	for (i = 1; i < n; i++)
		printf("%s%d", p, va_arg(list, int));
	printf("\n");
	va_end(list);
}
