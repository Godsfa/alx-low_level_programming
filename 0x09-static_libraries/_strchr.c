#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: String to search
 * @c: Character to find
 * Return: Pointer to the first occurrence of c in s or NULL if not found
 */
char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }

    if (*s == c) {
        return s;
    }

    return NULL;
}
