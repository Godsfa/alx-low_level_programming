#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
* error_exit - Print an error message and exit the program.
* @code: The exit code.
* @message: The error message to print.
*/

void error_exit(int code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}

void copy_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to;
ssize_t n_read, n_written;
char buffer[1024];

if (file_from == NULL)
error_exit(98, "Error: Can't read from file (nil)");

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
error_exit(98, "Error: Can't read from file");

fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
error_exit(99, "Error: Can't write to file");

while ((n_read = read(fd_from, buffer, sizeof(buffer))) > 0) {
n_written = write(fd_to, buffer, n_read);
if (n_written != n_read)
error_exit(99, "Error: Can't write to file");
}

if (n_read == -1)
error_exit(98, "Error: Can't read from file");

if (close(fd_from) == -1)
error_exit(100, "Error: Can't close fd (file_from)");

if (close(fd_to) == -1)
error_exit(100, "Error: Can't close fd (file_to)");
}

int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

copy_file(argv[1], argv[2]);

return (0);
}
