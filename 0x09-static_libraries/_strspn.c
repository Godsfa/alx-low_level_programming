#include <stddef.h>

/**
 * _strspn - Get the length of a prefix substring
 * @s: String to search
 * @accept: String containing the characters to match
 * Return: Number of bytes in the initial segment of s which consist
 *         only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;

    while (*s != '\0') {
        char *a = accept;

        while (*a != '\0') {
            if (*s == *a) {
                count++;
                break;
            }
            a++;
        }

        if (*a == '\0') {
            return count;
        }
        s++;
    }

    return count;
}
