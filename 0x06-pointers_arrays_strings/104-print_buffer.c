#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints the content of a buffer in a specified format.
 * @b: Pointer to the buffer to be printed.
 * @size: Number of bytes to print from the buffer.
 *
 * This function prints the content of the specified buffer @b. It prints 10 bytes
 * per line, displaying the position, hexadecimal content, and ASCII representation
 * of the buffer's contents.
 */
void print_buffer(char *b, int size) {
    if (size <= 0) {
        printf("\n");
        return;
    }

    for (int i = 0; i < size; i += 10) {
        printf("%08x: ", i); /* Print the starting position in hexadecimal */

        for (int j = 0; j < 10; j++) {
            if (i + j < size) {
                printf("%02x", (unsigned char)b[i + j]); /* Print the hexadecimal content */
            } else {
                printf("  "); /* Print spaces for incomplete lines */
            }

            if (j == 9) {
                printf(" ");
            } else {
                printf("  ");
            }
        }

        for (int j = 0; j < 10 && i + j < size; j++) {
            if (isprint(b[i + j])) {
                printf("%c", b[i + j]); /* Print printable characters */
            } else {
                printf("."); /* Print a dot for non-printable characters */
            }
        }

        printf("\n");
    }
}

