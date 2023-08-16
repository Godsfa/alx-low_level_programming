#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int i;
    unsigned long int a = 1, b = 2, next;

    printf("%lu, %lu", a, b);

    /* First loop for the first 90 Fibonacci numbers */
    for (i = 3; i <= 90; i++)
    {
        next = a + b;
        printf(", %lu", next);
        a = b;
        b = next;
    }

    /* Second loop for the remaining 8 Fibonacci numbers */
    for (i = 91; i <= 98; i++)
    {
        next = a + b;
        printf(", %lu", next);
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
