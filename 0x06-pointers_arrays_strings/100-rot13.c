#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: The input string
 *
 * Return: Pointer to the modified string
 */
char *rot13(char *s)
{
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13letters = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		int j;

		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = rot13letters[j];
				break;
			}
		}
	}

	return (s);
}

