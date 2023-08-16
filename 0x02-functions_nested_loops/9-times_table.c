#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int row, column, product;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
product = row * column;

if (column != 0)
printf(",  ");
if (product < 10)
printf("   ");
else if (product >= 10 && product < 100)
printf("  ");
            
printf("%d", product);
}
printf("\n");
}
}
