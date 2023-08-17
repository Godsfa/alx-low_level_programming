#include "main.h"

/**
 * print_line - prints a straight line using the character '_'
 * @n: number of times to print '_'
 */
void print_line(int n)
{
if (n <= 0)
{
putchar('\n');
return;
}

while (n > 0)
{
putchar('_');
n--;
}
putchar('\n');
}
