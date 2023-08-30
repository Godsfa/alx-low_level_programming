#include "main.h"

int wildcmp_recursive(char *s1, char *s2);

/**
* wildcmp - Compares two strings with wildcard support.
* @s1: Pointer to the first string.
* @s2: Pointer to the second string with wildcard support.
*
* Return: 1 if the strings are identical, 0 otherwise.
*/
int wildcmp(char *s1, char *s2)
{
return wildcmp_recursive(s1, s2);
}

/**
* wildcmp_recursive - Helper function to compare strings with wildcard support.
* @s1: Pointer to the first string.
* @s2: Pointer to the second string with wildcard support.
*
* Return: 1 if the strings are identical, 0 otherwise.
*/
int wildcmp_recursive(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
{
return 1;
}
while (*s1 != '\0')
{
if (wildcmp_recursive(s1, s2 + 1))
{
return 1;
}
s1++;
}
return (0);
}
else if (*s1 == *s2 || (*s2 == '?' && *s1 != '\0'))
{
if (*s1 == '\0')
{
return (*s2 == '\0');
}
return wildcmp_recursive(s1 + 1, s2 + 1);
}
return (0);
}
