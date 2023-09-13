#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/* Function to perform addition */
int op_add(int a, int b)
{
    return (a + b);
}

/* Function to perform subtraction */
int op_sub(int a, int b)
{
    return (a - b);
}

/* Function to perform multiplication */
int op_mul(int a, int b)
{
    return (a * b);
}

/* Function to perform division */
int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a / b);
}

/* Function to perform modulo */
int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a % b);
}
