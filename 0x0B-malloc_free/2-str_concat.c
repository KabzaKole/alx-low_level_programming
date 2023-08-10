#include "main.h"
#include <stdlib.h>

/**
 * str_concat -a function that concatenates two strings using malloc
 * @s1:charcater pointer to string 1
 * @s2:character pointer to string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, k, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	a = malloc((i + j + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);

	for (k = 0; k < (i + j + 1); k++)
	{
		if (k < i)
			a[k] = s1[k];
		else
			a[k] = s2[k - i];
	}

	return (a);
