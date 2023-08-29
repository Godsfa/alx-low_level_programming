#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strstr - Locates a substring in a string.
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to search for.
 *
 * Return: Pointer to the beginning of the located substring in @haystack,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack != '\0')
    {
        char *start = haystack;
        char *sub = needle;

        while (*haystack == *sub && *sub != '\0')
        {
            haystack++;
            sub++;
        }

        if (*sub == '\0')
        {
            return (start); /* Found the substring */
        }

        haystack = start + 1;
    }

    return NULL; /* Substring not found */
}
