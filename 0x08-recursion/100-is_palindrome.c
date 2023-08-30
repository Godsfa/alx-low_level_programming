#include "main.h"

int _strlen_recursion(char *s);
int check_palindrome(char *s, int start, int end);

/**
* is_palindrome - Checks if a string is a palindrome.
* @s: The string to be checked.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/
int is_palinrome(char *s)
{
int length = _strlen_recursion(s);

return (check_palindrome(s, 0, length - 1));
}

/**
* _strlen_recursion - Calculates the length of a string recursively.
* @s: The string.
*
* Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

return (1 + _strlen_recursion(s + 1));
}

/**
* check_palindrome - Helper function to check if a string is a palindrome.
* @s: The string to be checked.
* @start: The starting index.
* @end: The ending index.
*
* Return: 1 if the substring is a palindrome, 0 otherwise.
*/
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);

if (s[start] != s[end])
return (0);

return (check_palindrome(s, start + 1, end - 1));
}