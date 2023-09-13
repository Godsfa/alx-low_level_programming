#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - Prints a name using a given printing function.
* @name: The name to be printed.
* @f: A function pointer that points to a function to print the name.
*
* Description: This function takes a name and a function pointer as parameters.
*              It checks if the name and function pointer are not NULL, and if
*              so, it calls the function pointed to by f with the name as an
*              argument.
*/

/* Define the print_name function */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
    {
        f(name);
    }
}