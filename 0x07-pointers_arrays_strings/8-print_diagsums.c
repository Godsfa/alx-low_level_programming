#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Prints the sum of diagonals in a square matrix.
* @a: Pointer to the square matrix (2D array).
* @size: Size of the matrix.
*/
void print_diagsums(int *a, int size)
{
int sum_primary = 0; 
int sum_secondary = 0; 
int i;

for (i = 0; i < size; i++)
{
int index = i * size + i;
int secondary_index = (i + 1) * size - (i + 1); 
sum_primary += a[index];
sum_secondary += a[secondary_index]; 
}

printf("%d, %d\n", sum_primary, sum_secondary); 
}
