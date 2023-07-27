#include <stdio.h>

/**
 * Tortoise - function that prints sentence
 * Return: void
 */
void __attribute__((constructor)) Tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
