#include "main.h"  /* Include the header file where unsigned long int is defined */

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number in which to set the bit.
 * @index: The index of the bit to set, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return -1; /* Error: Index out of range */

    /* Use bitwise OR to set the bit at index to 1 */
    *n = *n | (1ul << index);

    return (1);
}
