#include "main.h"
#include <stdbool.h>

/**
 * cap_string - Capitalizes all words in a string
 * @s: The input string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *s)
{
	bool new_word = true;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				s[i] == '!' || s[i] == '?' || s[i] == '"' ||
				s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			new_word = true;
		}
		else if (new_word && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 'a' - 'A';
			new_word = false;
		}
		else
		{
			new_word = false;
		}
	}

	return (s);
}

