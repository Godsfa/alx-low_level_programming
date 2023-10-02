#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* append_text_to_file - Appends text to the end of a file.
* @filename: The name of the file to which to append.
* @text_content: The content to append to the file (a NULL-terminated string).
*
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, write_status;
size_t text_length = 0;

if (filename == NULL)
return (-1);

/* Open the file for writing (append to it) */
fd = open(filename, O_WRONLY | O_APPEND);
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
