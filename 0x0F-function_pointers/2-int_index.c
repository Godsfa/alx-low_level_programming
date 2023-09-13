#include <stdio.h>
#include <stddef.h>

/**
 * int_index - Searches for an integer in an array using a custom comparison function.
 * @array: Pointer to the integer array.
 * @size: The number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: The index of the first element for which cmp does not return 0, or -1 if no match found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
    if (array != NULL && cmp != NULL)
    {
        int i;

        for (i = 0; i < size; i++)
        {
            if (cmp(array[i]))
            {
                return i;
            }
        }
    }
    return -1;
}
