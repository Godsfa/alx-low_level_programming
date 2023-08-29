#include "main.h"
#include <stddef.h>
#include <string.h>

/**
* _strpbrk - Searches a string for any of a set of bytes.
* @s: Pointer to the string to search.
* @accept: Pointer to the string containing the characters to match.
*
* Return: Pointer to the first occurrence in @s of any byte in @accept,
*         or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
if (strchr(accept, *s) != NULL)
{
return (s); /* Found a matching byte */
}
s++;
}

return NULL; /* No matching byte found */
}
