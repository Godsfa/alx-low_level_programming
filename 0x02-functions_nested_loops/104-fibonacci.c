#include <stdio.h>

int main(void)
{
    int count = 0;
    unsigned long int a = 1, b = 2, next;

    printf("%lu, %lu", a, b);
    count += 2;

    /* Loop to generate the first 98 Fibonacci numbers */
    while (count < 98)
    {
        next = a + b;
        printf(", %lu", next);
        a = b;
        b = next;
        count++;
    }

    printf("\n");
    return 0;
}
