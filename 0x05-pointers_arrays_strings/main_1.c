#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting from the first character.
 * @str: The input string.
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (i % 2 == 0)
        {
            putchar(str[i]);
        }
        i++;
    }
    putchar('\n');
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    puts2(str);
    return (0);
}
