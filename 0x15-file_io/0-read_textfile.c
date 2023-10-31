#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* read_textfile - Reads and prints a text file to the standard output.
* @filename: The name of the file to read.
* @letters: The number of letters to read and print.
*
* Return: The actual number of letters read and printed, or 0 on error.
*/
ssize_t read_textfile(const char *filename, size_t letters) {
int file_descriptor;
char *buffer;
ssize_t bytes_read;
ssize_t bytes_written;

if (filename == NULL) {
return (0);
}

file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1) {
return (0);
}

buffer = malloc(letters);
if (buffer == NULL) {
close(file_descriptor);
return (0);
}

bytes_read = read(file_descriptor, buffer, letters);
if (bytes_read == -1) {
close(file_descriptor);
free(buffer);
return (0);
}

bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || (size_t)bytes_written != (size_t)bytes_read) {
close(file_descriptor);
free(buffer);
return (0);
}

close(file_descriptor);
free(buffer);

return (bytes_written);
}
