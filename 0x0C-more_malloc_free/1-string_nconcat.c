#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates n bytes of one string to another.
 * @s1: The destination string.
 * @s2: The source string.
 * @n: The maximum number of bytes from s2 to concatenate.
 * Return: A pointer to the concatenated string, or NULL if malloc fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;

	if (s1)
	len1 = strlen(s1);

	if (s2)
	len2 = strlen(s2);

	if (n < len2)
	len2 = n;

	char *s = malloc(len1 + len2 + 1);

	if (!s1)
	return (NULL);

	unsigned int i = 0, j = 0;

	if (s1)
	{
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	}

	while (j < len2)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
}
