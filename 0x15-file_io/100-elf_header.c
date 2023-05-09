#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <errno.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;
	ssize_t n;

	if (argc != 2)
	{
	fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
	exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
	fprintf(stderr, "Error opening file: %s\n",
	strerror(errno));
	exit(98);
	}
	n = read(fd, &header, sizeof(header));
	if (n != sizeof(header))
	{
	fprintf(stderr, "Error reading ELF header:
	%s\n", strerror(errno));
	exit(98);
	}
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
	fprintf(stderr, "Error: Not an ELF file\n");
	exit(98);
	}
	printf("Magic: %02x %02x %02x %02x\n",
	header.e_ident[0], header.e_ident[1],
	header.e_ident[2], header.e_ident[3]);
	printf("Class: %d-bit\n", header.e_ident[EI_CLASS] ==
	ELFCLASS32 ? 32 : 64);
	printf("Data: %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ?
	"2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header.e_type);
	printf("Entry point address: 0x%lx\n", header.e_entry);
	close(fd);
	return (0);
}
