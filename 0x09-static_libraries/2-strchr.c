#include "main.h"
#include <stddef.h>

/**
 * _strchr - character pointer _strchr
 * @s: character pointer s
 * @c: character c
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{

	for (int i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
