#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase in a string
 * @s: The string to be modified
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}

	return (s);
}

