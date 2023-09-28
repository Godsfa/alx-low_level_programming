#include <stdio.h>
#include "main.h"

/**
* print_binary - Prints the binary representation of a number.
* @n: The number to be converted and printed.
*/
void print_binary(unsigned long int n)
{
int i;
int size = sizeof(unsigned long int) * 8;
int leading_zeros = 1; /* Flag to track leading zeros */

/* Loop through each bit position from left to right */
for (i = size - 1; i >= 0; i--)
{
/* Check if the current bit is set (1) or not (0) */
if ((n >> i) & 1)
{
putchar('1');
leading_zeros = 0; /* Turn off leading_zeros flag */
}
else if (!leading_zeros)
{
putchar('0');
}
}

/* If the number is 0, print a single '0' */
if (leading_zeros)
{
putchar('0');
}
}
