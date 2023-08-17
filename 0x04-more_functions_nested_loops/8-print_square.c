#include <stdio.h>

/**
 * print_square - prints a square using the character '#'
 * @size: size of the square
 */
void print_square(int size)
{
int row, column;

if (size <= 0)
{
putchar('\n');
return;
}

for (row = 0; row < size; row++)
{
for (column = 0; column < size; column++)
{
putchar('#');
}
putchar('\n');
}
}
