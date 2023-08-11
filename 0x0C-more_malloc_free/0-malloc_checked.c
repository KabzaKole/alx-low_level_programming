#include "main.h"
#include <stdio.h>

/**
 * *malloc_checked - a function with a void return type that
 * allocates memory using malloc
 * @b:the number of bytes to allocate
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memallo = malloc(b);

	if (memallo == NULL)
	exit(98);

	return (memallo);
}
