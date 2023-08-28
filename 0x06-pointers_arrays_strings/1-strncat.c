#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to concatenate from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* Calculate the length of dest */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Concatenate up to n bytes from src to dest */
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Add the terminating null byte */
	dest[dest_len + i] = '\0';

	return (dest);
}

