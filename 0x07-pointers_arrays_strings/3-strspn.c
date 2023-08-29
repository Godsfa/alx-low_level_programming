#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of @s that consist only of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;

    while (*s != '\0' && strchr(accept, *s) != NULL)
    {
        count++;
        s++;
    }

    return (count);
}
