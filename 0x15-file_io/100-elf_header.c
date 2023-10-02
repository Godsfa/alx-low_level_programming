#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
* error_exit - Display an error message to stderr and exit with status code 98.
* @msg: The error message to display.
*/
void error_exit(const char *msg)
{
fprintf(stderr, "%s\n", msg);
exit(98);
}

/**
* print_elf_header - Print the information contained in the ELF header.
* @header: A pointer to the ELF header structure.
*/
void print_elf_header(Elf64_Ehdr *header)
{
printf("ELF Header:\n");
printf("  Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
header->e_ident[EI_MAG0], header->e_ident[EI_MAG1], header->e_ident[EI_MAG2],
header->e_ident[EI_MAG2], header->e_ident[EI_MAG2], header->e_ident[EI_MAG2],
header->e_ident[EI_MAG2], header->e_ident[EI_MAG2], header->e_ident[EI_MAG2],
header->e_ident[EI_MAG2], header->e_ident[EI_MAG2], header->e_ident[EI_MAG2],
header->e_ident[EI_MAG2]);
printf("  Class:                             ");
switch (header->e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("Invalid class\n");
break;
}
printf("  Data:                              ");
switch (header->e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("Invalid data encoding\n");
break;
}
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            ");
switch (header->e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("UNIX - Unknown\n");
break;
}
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (header->e_type)
{
case ET_NONE:
printf("NONE (Unknown)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("Unknown type\n");
break;
}
printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

/**
* main - Entry point of the program.
* @argc: The number of command-line arguments.
* @argv: An array of strings containing the arguments.
*
* Return: 0 on success, or an error code.
*/
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
error_exit("Usage: elf_header elf_filename");

/* Open the ELF file */
fd = open(argv[1], O_RDONLY);
if (fd == -1)
error_exit("Error: Cannot open file");

/* Read the ELF header */
if (read(fd, &header, sizeof(header)) != sizeof(header))
error_exit("Error: Cannot read ELF header");

/* Check if it's a valid ELF file */
if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
error_exit("Error: Not an ELF file");

/* Print the ELF header information */
print_elf_header(&header);

/* Close the file */
close(fd);

return 0;
}
