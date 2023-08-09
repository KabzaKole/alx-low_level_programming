#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"

/**
 * main - Prints the sum of positive numbers, followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *	Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	for (int num = 1; num < argc; num++)
	{
		bool isNumber = true;

		for (int digit = 0; argv[num][digit]; digit++)
		{
		if (argv[num][digit] < '0' || argv[num][digit] > '9')
		{
			isNumber = false;
			break;
		}
		}

		if (isNumber)
		{
		sum += atoi(argv[num]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("Sum: %d\n", sum);

	return (0);
}
