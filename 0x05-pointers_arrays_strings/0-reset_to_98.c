#include <stdio.h>

/* Function prototype */
void reset_to_98(int *n);

int main(void)
{
    int num = 402;

    printf("Before reset: %d\n", num);
    reset_to_98(&num);
    printf("After reset: %d\n", num);

    return 0;
}
