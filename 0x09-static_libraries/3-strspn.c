#include "main.h"
/**
 * _strspn - Entry point
 * @s: character pointer s
 * @accept: charater pointer accept
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s)
	{
		for (int r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
