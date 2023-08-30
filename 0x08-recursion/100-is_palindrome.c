#include "main.h"

int _strlen(char *s);

int is_palindrome_recursive(char *s, int start, int end);

/**
* is_palindrome - Checks if a string is a palindrome.
* @s: Pointer to the string to be checked.
*
* Return: 1 if @s is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
int length;

if (!s)
{
return (0);
}

length = _strlen(s);
return is_palindrome_recursive(s, 0, length - 1);
}

/**

* is_palindrome_recursive - Helper function to check if a string is a palindrome.
* @s: Pointer to the string to be checked.
* @start: Start index of the current comparison.
* @end: End index of the current comparison.
*
* Return: 1 if @s is a palindrome, 0 otherwise.
*/
int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}

if (s[start] != s[end])
{
return (0);
}

return is_palindrome_recursive(s, start + 1, end - 1);
}

/**
* _strlen - Returns the length of a string.
* @s: Pointer to the string.
*
* Return: Length of the string.
*/
int _strlen(char *s)
{
int length = (0);
while (*s)
{
length++;
s++;
}
return (length);
}
