#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - Prints a string in reverse.
* @s: Pointer to the string to be printed in reverse.
*/

void _print_rev_recursion(char *str)
{
if (*str == '\0')
{
return;
}
_print_rev_recursion(str + 1);
putchar(*str);

}