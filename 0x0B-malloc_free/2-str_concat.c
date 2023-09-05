#include <stdlib.h>
#include "main.h"

/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: A pointer to a newly allocated space in memory
*         containing the concatenated strings, or NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

concat = malloc((len1 + len2 + 1) * sizeof(char));

if (concat == NULL)
return (NULL);

while (i < len1)
{
concat[i] = s1[i];
i++;
}

while (j < len2)
{
concat[i] = s2[j];
i++;
j++;
}

concat[i] = '\0';

return (concat);
}
