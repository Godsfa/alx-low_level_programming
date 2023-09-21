#include <stddef.h>

/**
 * _strncpy - Copies n bytes of a string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to copy
 * Return: Pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n) {
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    while (i < n) {
        dest[i] = '\0';
        i++;
    }

    return dest;
}
