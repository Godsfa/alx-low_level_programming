#include "main.h"  /* Include the header file where int is defined */

/**
* get_endianness - Checks the endianness of the system.
*
* Return: 0 if big endian, 1 if little endian.
*/
int get_endianness(void)
{
unsigned int test = 1;
unsigned char *byte_ptr = (unsigned char *)&test;

/* Check the value of the least significant byte */
if (*byte_ptr == 1)
return (1); /* Little endian */
else
return (0); /* Big endian */
}
