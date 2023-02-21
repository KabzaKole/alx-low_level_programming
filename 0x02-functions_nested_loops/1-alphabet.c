#include "main.h"

/**
 * print alphabet - display in lowercase and end at a new line
 * Return: void
 * 
 */

void print_alphabet(void)
{
	char c; 
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
