#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: the number of arguments
 * @argv: an array of strings containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return (0);
}
