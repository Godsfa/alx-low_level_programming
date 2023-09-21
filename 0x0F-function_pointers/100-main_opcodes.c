#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    int num_bytes;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    num_bytes = atoi(argv[1]);

    if (num_bytes < 0)
    {
        printf("Error\n");
        return (2);
    }

    unsigned char *main_ptr = (unsigned char *)&main;
    int i;

    for (i = 0; i < num_bytes; i++)
    {
        printf("%02x", main_ptr[i]);
        if (i < num_bytes - 1)
            printf(" ");
        else
            printf("\n");
    }

    return (0);
}
