#include "main.h"

/**
 * is_file_elf - checks if file is an ELF format
 * @e_ident: array of bytes
 * @filename: name of file to be checked
 *
 * Return: 1(true) or 0(false)
 */
int is_file_elf(unsigned char *e_ident)
{
	if (!(e_ident[0] == 127 && e_ident[1] == 'E' &&
				e_ident[2] == 'L' && e_ident[3] == 'F'))
		return (0);

	return (1);
}

/**
 * print_magic - prints magic information of elf file
 * @e_ident: array of bytes
 */
void print_magic(unsigned char *e_ident)
{
	int i = 0;

	printf("Elf-Header:\n");
	printf("%-11s", "  Magic:");
	for (; i < EI_NIDENT; i++)
	{
		printf("%02x ", e_ident[i]);
	}
	printf("\n");
}

/**
 * print_class - prints class information of elf file
 * @e_ident: array of bytes
 */
void print_class(unsigned char *e_ident)
{
	printf("%-37s", "  Class:");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
			break;

		case ELFCLASS32:
			printf("ELF32");
			break;

		default:
			printf("Invalid class");
	}
	printf("\n");
}

/**
 * print_data - prints data information of elf file
 * @e_ident: array of bytes
 */
void print_data(unsigned char *e_ident)
{
	printf("%-37s", "  Data:");
	switch (e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little-endian");
			break;

		case ELFDATA2MSB:
			printf("2's complement, big-endian");
			break;

		default:
			printf("Unknown data format");

	}
	printf("\n");
}

/**
 * print_version - prints version information of elf file
 * @e_ident: array of bytes
 */
void print_version(unsigned char *e_ident)
{
	printf("%-37s", "  Version:");
	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf("1 (current)");
			break;

		default:
			printf("Invalid version");
	}
	printf("\n");
}

/**
 * print_osabi - prints OS/ABI information of elf file
 * @e_ident: array of bytes
 */
void print_osabi(unsigned char *e_ident)
{
	printf("%-37s", "  OS/ABI:");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("TRU64 UNIX");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture");
			break;
		case ELFOSABI_STANDALONE:
			printf("Stand-alone (embedded)");
			break;
	}
	printf("\n");
}

/**
 * print_type - prints type information of elf file
 * @e_type: elf file type
 */
void print_type(uint16_t e_type)
{
	printf("%-37s", "  Type:");
	switch (e_type)
	{
		case ET_REL:
			printf("REL (Relocation file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("No file type");
	}
	printf("\n");
}
/**
 *  * print_entry - Prints the entry point of an ELF header.
 *   * @e_entry: The address of the ELF entry point.
 *    * @e_ident: A pointer to an array containing the ELF class.
 *     */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("%-37s", "  Entry point address:");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}
/**
 * close_n_free - closes fd and frees malloc
 * @header: pointer to ELF struct
 * @fd: file descriptor
 */
void close_n_free(Elf64_Ehdr *header, int fd)
{
	int n_close;

	free(header);
	header = NULL;
	n_close = close(fd);

	if (n_close < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(150);
	}
}
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	Elf64_Ehdr *header;
	int fd, n_read;

	if (argc != 2)
	{
		dprintf(2, "Usage: elf_header elf_filename\n");
		return (95);
	}

	/* create pointer to ELF struct */
	header = malloc(sizeof(Elf64_Ehdr));
	if (!header)
		return (99);

	/* open elf file */
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(2, "File %s does not exist\n", argv[1]);
		free(header);
		header = NULL;
		return (100);
	}

	/* read file to header buffer */
	n_read = read(fd, header, sizeof(Elf64_Ehdr));
	if (n_read < 0)
	{
		close_n_free(header, fd);
		return (101);
	}

	/* check if file is elf */
	if (!is_file_elf(header->e_ident))
	{
		dprintf(2, "Error: %s not an ELF file - it has the wrong magic ", argv[1]);
		dprintf(2, "bytes at the starts not an elf file\n");

		close_n_free(header, fd);
		exit(98);
	}

	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	printf("%-37s%d\n", "  ABI Version:", header->e_ident[EI_ABIVERSION]);
	print_type(header->e_type);
	print_entry(header->e_entry, header->e_ident);
	close_n_free(header, fd);
	return (0);
}

