#include "main.h"

/**
 * _memset - This program replaces a block of memeory with a specific value
 * @a:pointer to be filled
 * @b:constant
 * @n:max number of bytes to be utilized
 * Return:s
 */

char *_memset(char *a, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; n++)
	{
		a[i] = b;
	}
	return (a);
}
