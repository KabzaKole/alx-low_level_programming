#include "main.h"

/**
 * _memset - This program replaces a block of memeory with a specific value
 * @a:pointer to be filled
 * @b:constant
 * @n:max number of bytes to be utilized
 *
 * Return:s
 */

char *_memset(char *a, char b, unsigned int n)
{
	int i = 0;

	for (i; n > 0; n++)
	{
		a[i] = b;
		n--;
	}
	return (0);
}
