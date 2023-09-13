#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the integer array.
 * @size: The size of the array.
 * @action: Pointer to the function to execute on each element.
 *
 * Description: This function takes an integer array, its size, and a function
 * pointer as parameters. It applies the given function to each element of
 * the array.
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array != NULL && action != NULL)
    {
        size_t i;

        for (i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}
