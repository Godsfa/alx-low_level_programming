#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: the number of arguments
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 if successful, 1 if any argument is not a positive number
 */
int main(int argc, char *argv[])
{
    int i, num, sum = 0;

    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    for (i = 1; i < argc; i++)
    {
        num = atoi(argv[i]);

        if (num <= 0)
        {
            printf("Error\n");
            return (1);
        }

        sum += num;
    }

    printf("%d\n", sum);

    return (0);
}
