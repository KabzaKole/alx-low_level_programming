#include <stdio.h>
#include "main.h"

/** main - prints the number of arguments passed in the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
