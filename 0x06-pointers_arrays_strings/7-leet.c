#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: The input string
 *
 * Return: Pointer to the modified string
 */
char *leet(char *s)
{
	char *letters = "AEOTL";
	char *numbers = "43071";

	for (int i = 0; s[i] != '\0'; i++)
	{
		for (int j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j] || s[i] == letters[j] + 32)
			{
				s[i] = numbers[j];
				break;
			}
		}
	}

	return (s);
}

