#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * using n bytes from src
 * @dest: input value from dest
 * @src: input value to src
 * @n: input value of n
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
