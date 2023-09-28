#include <stdio.h>
#include "main.h"  /* Include the header file where unsigned int is defined */

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: A pointer to a string of 0 and 1 chars.
*
* Return: The converted number, or 0 if there are invalid.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i = 0;

if (b == NULL)
return (0); /* Return 0 if the input string is NULL */

while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
return (0); /* Return 0 if there is an invalid character */

result = result * 2 + (b[i] - '0'); /* Convert binary to unsigned int */
i++;
}

return (result);
}
