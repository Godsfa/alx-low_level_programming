#include <stddef.h>

/**
 * _strncat - Concatenates two strings with n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes from src to concatenate
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n) {
    int i, j;

    for (i = 0; dest[i] != '\0'; i++)
        ;

    for (j = 0; j < n && src[j] != '\0'; j++) {
        dest[i] = src[j];
        i++;
    }

    dest[i] = '\0';
    return dest;
}
