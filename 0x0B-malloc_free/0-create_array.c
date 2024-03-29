#include "main.h"
#include <stdlib.h>

/**
 * create_array -a function that creates an array of chars
 * and initializes with specific char
 * @size:the size of the array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if error
 */

char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}

	string = (char *)malloc(size * sizeof(char));
	if (string == NULL)
	{
	return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		string[i] = c;
	}
	return (string);
}
