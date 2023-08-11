#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int *array_range(int min, int max)
{
	if (min > max)
	{
		return NULL;
	}

	unsigned in size = max - min + 1;

	int *arr_ran = malloc(size * sizeof(int));

	if (arr_ran == NULL)
	{
		return NULL;
	}

	for (unsigned int i = 0; i < size; i++)
	{
		arr_ran[i] = min + i;
	}

	return arr_ran;
}
