#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: String to search
 * @needle: Substring to find
 * Return: Pointer to the beginning of the located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle) {
    char *h, *n;

    if (*needle == '\0') {
        return haystack;
    }

    while (*haystack != '\0') {
        h = haystack;
        n = needle;

        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }

        if (*n == '\0') {
            return haystack;
        }

        haystack++;
    }

    return NULL;
}
