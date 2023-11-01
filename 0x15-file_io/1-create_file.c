#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

/**
* create_file - Create a file with specified content and permissions.
* @filename: The name of the file to create.
* @text_content: The text content to write to the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int file_descriptor;

if (filename == NULL)

return (-1);


file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

if (file_descriptor == -1)

return (-1);


if (text_content != NULL)
{
ssize_t bytes_written = write(file_descriptor, text_content, strlen(text_content));

if (bytes_written == -1)
{
close(file_descriptor);
return (-1);
}
}

close(file_descriptor);
return (1);
}
