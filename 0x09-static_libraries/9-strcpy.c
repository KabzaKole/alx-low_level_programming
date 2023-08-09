#include "main.h"

/**
 * char *_strcpy - a function that copies the string
 * @dest:character pointer that copies to
 * @src:character pointer that copies from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	int b;
	for (b = 0; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';
	return (dest);
}
