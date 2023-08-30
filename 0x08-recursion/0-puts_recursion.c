#include "main.h"
#include <stdio.h>

/**
*_puts_recursion - prints a string, followed by a new line
* @s: Pointer to the string to be printed.
*/
void _puts_recursion(char * s) /*print string without newline*/
{
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s + 1);
}
