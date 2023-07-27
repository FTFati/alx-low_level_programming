#include <stdio.h>

/**
 * Tortoise - function that prints sentence
 * Return: void
 */
void __attribute__((constructor)) Tortoise(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
