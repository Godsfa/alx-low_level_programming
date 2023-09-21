#include <stddef.h>

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: String to search
 * @accept: Set of bytes to search for
 * Return: Pointer to the first byte in s that matches any byte in accept
 *         or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        char *a = accept;

        while (*a != '\0') {
            if (*s == *a) {
                return s;
            }
            a++;
        }
        s++;
    }

    return NULL;
}
