#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	unsigned int integer = n;

	if (n < 0)
	{
		putchar('-');
		integer = -integer;
	}

	if ((integer / 10) > 0)
	{
		print_number(integer / 10);
	}

	putchar((integer % 10) + '0');
}
