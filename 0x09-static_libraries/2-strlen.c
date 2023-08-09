#include "main.h"
/**
 * _strlen -function that returns the length of a string
 * @s: charcater pointer s
 * Return: length(str)
 */
int _strlen(char *s)
{
	int str = 0;

	while (*s != '\0')
	{
		str++;
		s++;
	}

	return (str);
}
