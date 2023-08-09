#include "main.h"

/**
 * _strcat - concatenates (connects) @src to @dest
 * @src: the initial string is to be concatenated to @dest
 * @dest: the destiation string is to be concatenated
 * Return:void
 */

char *_strcat(char *dest, char *src)
{
	int e = 0;
	int d = 0;

	while (dest[e] != '\0')
	{
		e++;
	}

	while (src[d] != '\0')
	{
		dest[d] = src[d];

		e++;
		d++;
	}

	dest[e] = '\0';
	return (dest);
}
