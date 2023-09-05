#include <stdlib.h>
#include "main.h"

/**
* argstostr - Concatenates all the arguments of the program.
* @ac: The number of arguments.
* @av: An array of strings containing the arguments.
*
* Return: A pointer to the concatenated string, or NULL on failure.
*/
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k = 0, len = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
len++;  /* Add one for the newline character '\n' */
}

/* Allocate memory for the concatenated string plus the null terminator */
str = malloc(sizeof(char) * (len + 1));

if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';  /* Add the newline character */
k++;
}

str[k] = '\0';  /* Null-terminate the string */
return (str);
}
