#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to standard output
 * @str:character pointer string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
