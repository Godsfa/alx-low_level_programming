#include <stdio.h>

/**
 * print_diagonal - prints a diagonal line using the character '\'
 * @n: number of times to print '\'
 */
void print_diagonal(int n)
{
int spaces;
int i;

if (n <= 0)
{
putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
for (spaces = 0; spaces < i; spaces++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}

