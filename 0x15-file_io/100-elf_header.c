#include "main.h"
#include <elf.h>

void more_osabi(Elf64_Ehdr h);

/**
 * magic_p - print ELF magic byes
 * @a: ELF header
 */
void magic_p(Elf64_Ehdr h)
{
	int j;

	printf("  Magic:   ");
	for (j = 0; j < EI_NIDENT; j++)
		printf("%2.2x%s", h.e_ident[j], j == EI_NIDENT - 1 ? "\n" : " ");
}
/**
 * class_p - prints ELF class
 * @b: ELF header
 */
void class_p(Elf64_Ehdr h)
{
	printf("  Class:                             ");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASS64:
			printf("ELF64");
			break;
		case ELFCLASSNONE:
			printf("none");
			break;
	}
	printf("\n");
}
/**
 * data_p -prints ELF dat
 * @h: ELF header
 */
void data_p(Elf64_Ehdr h)
{
	printf("  Data                               ");
	switch (h.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATANONE:
			printf("none");
			break;
	}
	printf("\n");
}
/**
 * version_p - print ELF version
 * @h: ELF header
 */
void version_p(Elf64_Ehdr h)
{
	printf("  Version:                       %d", h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
			break;
		case EV_NONE:
			printf("%s", "");
			break;
		break;
	}
	printf("\n");
}
/**
 * osabi_p - prints ELF osabi
 * @h: ELF header
 */
void osabi_p(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		default:
			more_osabi(h);
			break;
	}
	printf("\n");
}
/**
 * more_osabi - prints osabi more
 * @h: ELF header
 */
void more_osabi(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>", h.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * type_p - prints ELF type
 * @h: ELF header
 */
void type_p(Elf64_Ehdr h)
{
	int i = 0;
	char *a = (char *)&h.e_type;

	printf("  Type:                              ");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;
	switch (a[i])
	{
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		default:
			printf("<unknown>: %x", a[i]);
			break;
	}
	printf("\n");
}


/**
 * abiversion_p - prints ELF ABI version
 * @h: ELF Header
 */
void abiversion_p(Elf64_Ehdr h)
{
	printf("  ABI Version:                      %d\n", h.e_ident[EI_ABIVERSION]);
}
/**
 * entry_p - prints ELF entry adress
 * @h: ELF header
 */
void entry_p(Elf64_Ehdr h)
{
	unsigned char *a = (unsigned char *)&h.e_entry;
	int i = 0, l = 0;

	printf("  Entry point address:               0x");
	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!a[i])
			i--;
		printf("%x", a[i--]);
		for (; i >= 0; i--)
			printf("%02x", a[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		l = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!a[i])
			i++;
		printf("%x", a[i++]);
		for (; i <= l; i++)
			printf("%02x", a[i]);
		printf("\n");
	}
}
/**
 * main - entry
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 0n success 0 onfailure
 */
int main(int argc, char **argv)
{
	int i;
	ssize_t a;
	Elf64_Ehdr u;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	i = open(argv[1], O_RDONLY);
	if (i == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", argv[1]), exit(98);
	a = read(i, &u, sizeof(u));
	if (a < 1 || a != sizeof(u))
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]), exit(98);
	if (u.e_ident[0] == 0x7f && u.e_ident[1] == 'E' && u.e_ident[2] == 'L' && u.e_ident[3] == 'F')
		printf("ELF Header:\n");
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", argv[1]), exit(98);
	magic_p(u);
	class_p(u);
	data_p(u);
	version_p(u);
	osabi_p(u);
	abiversion_p(u);
	type_p(u);
	entry_p(u);
	if (close(i))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", i), exit(98);
	return (EXIT_SUCCESS);
}
