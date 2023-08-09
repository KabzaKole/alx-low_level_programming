#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - a function that duplicates two strings
* to new memory space location
* @str: char
* Return: 0
*/

char *_strdup(char *str)
{
	char *array;
	int i, j = 0;

	if (str == NULL)
	return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{}


	array = malloc(sizeof(char) * (i + 1));

	if (array == NULL)
	return (NULL);

	for (j = 0; str[j]; j++)
		array[j] = str[j];

	array[j] = '\0';
	return (array);
}
