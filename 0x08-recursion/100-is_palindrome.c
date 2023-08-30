#include "main.h"

int _strlen(char *s);
int is_alpha_numeric(char c);
char to_lower(char c);

/**
* is_palindrome - Checks if a string is a palindrome.
* @s: The string to be checked.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
int len = _strlen(s);
int i, j;

if (len <= 1)
return (1);
i = 0;
j = len - 1;

while (i < j)
{
while (!is_alpha_numeric(s[i]))
i++;
while (!is_alpha_numeric(s[j]))
j--;

if (i < j && to_lower(s[i]) != to_lower(s[j]))
return (0);

i++;
j--;
}

return (1);
}

/**
* _strlen - Calculates the length of a string.
* @s: The string.
*
* Return: The length of the string.
*/
int _strlen(char *s)
{
int len = 0;
while (*s)
{
len++;
s++;
}
return (len);
}

/**
* is_alpha_numeric - Checks if a character is alphanumeric.
* @c: The character to be checked.
*
* Return: 1 if the character is alphanumeric, 0 otherwise.
*/
int is_alpha_numeric(char c)
{
return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

/**
* to_lower - Converts a character to lowercase.
* @c: The character to be converted.
*
* Return: The lowercase character.
*/
char to_lower(char c)
{
if (c >= 'A' && c <= 'Z')
return (c + 32);
return (c);
}
