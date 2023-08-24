#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The input string.
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i;
	int capitalize = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				s[i] == '!' || s[i] == '?' || s[i] == '"' ||
				s[i] == '(' || s[i] == ')' || s[i] == '{' ||
				s[i] == '}')
		{
			capitalize = 1;
		}
		else if (capitalize && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}
	}

	return (s);
}
