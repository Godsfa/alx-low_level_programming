#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void display_elf_info(Elf64_Ehdr *header)
{
int i;
printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < 16; i++)

printf("%02x ", header->e_ident[i]);

printf("\n");

printf("  Class:                             ELF%d\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
printf("  Data:                              2's complement, %s endian\n",
header->e_ident[EI_DATA] == ELFDATA2LSB ? "little" : "big");
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            UNIX - %s\n",
header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "System V" :
header->e_ident[EI_OSABI] == ELFOSABI_HPUX ? "HP-UX" :
header->e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "NetBSD" :
header->e_ident[EI_OSABI] == ELFOSABI_LINUX ? "Linux" :
header->e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "Solaris" :
header->e_ident[EI_OSABI] == ELFOSABI_AIX ? "AIX" :
header->e_ident[EI_OSABI] == ELFOSABI_IRIX ? "IRIX" :
header->e_ident[EI_OSABI] == ELFOSABI_FREEBSD ? "FreeBSD" :
"Unknown");
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              %s (",
header->e_type == ET_REL ? "REL (Relocatable file)" :
header->e_type == ET_EXEC ? "EXEC (Executable file)" :
header->e_type == ET_DYN ? "DYN (Shared object file)" :
header->e_type == ET_CORE ? "CORE (Core file)" :
"Unknown");
printf("Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[])
{
const char *elf_filename;
int fd;
Elf64_Ehdr header;

if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}

elf_filename = argv[1];
fd = open(elf_filename, O_RDONLY);
if (fd == -1)
{
fprintf(stderr, "Error: Can't open file %s\n", elf_filename);
exit(98);
}

if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
{
fprintf(stderr, "Error: Can't read ELF header from file %s\n", elf_filename);
close(fd);
exit(98);
}

if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3) {
fprintf(stderr, "Error: Not an ELF file: %s\n", elf_filename);
close(fd);
exit(98);
}

display_elf_info(&header);

close(fd);
return (0);
}
