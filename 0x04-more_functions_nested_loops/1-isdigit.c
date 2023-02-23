#include "main.h"
/**
 * _isdidgit-checks for a digit (0 through 9)
 * @c:int to be checked
 * Return: 1 if cis a digit, otherwise  return 0
 */
int _isdigit(int c)
{
	if (c >= '48' && c <= '57')
	{
	return (1);
	}
	return (0);
}
