#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* create_file - Creates a file with the specified content.
* @filename: The name of the file to create or truncate.
* @text_content: The content to write to the file (a NULL-terminated string).
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int fd, write_status;
size_t text_length = 0;

if (filename == NULL)
return (-1);

/* Open the file for writing (create if it*/
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
/* Calculate the length of the text content */
while (text_content[text_length] != '\0')
text_length++;

/* Write the text content to the file */
write_status = write(fd, text_content, text_length);
if (write_status == -1)
{
close(fd);
return (-1);
}
}

/* Close the file descriptor */
close(fd);

return (1);
}
