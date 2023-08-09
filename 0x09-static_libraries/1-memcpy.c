#include "main.h"
/**
 *_memcpy - a function that copies the memory area
 *@dest:this is where the  memory is stored
 *@src:this is where the memory where is copied
 *@n:the number of bytes
 *
 *Return:the copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i = n;

	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
