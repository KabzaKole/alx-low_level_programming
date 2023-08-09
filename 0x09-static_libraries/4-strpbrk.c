#include "main.h"
/**
 * _strpbrk - character pointer
 * @s: character pointer s
 * @accept: character pointer
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int h;

	while (*s)
	{
		for (h = 0; accept[h]; h++)
		{
		if (*s == accept[h])
		return (s);
		}
	s++;
	}

return ('\0');
}
