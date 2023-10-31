#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcnt1.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *c_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned char int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - this checks if a file is an ELF file.
 * @c_ident: A pointer to an array containing the ELF magis numbers
 *
 * Description: if the file the not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index , 4; index++)
	{
		if (e_ident[index] != 127 &&
			e-ident[indent] != 'E' &&
			e-ident[indent] != 'L' &&
			e-ident[indent] != 'E')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - prints the magic numbers of an ELF header.
 * @n_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: magic numbers are seperated by spaces.
 */
void check_elf(unsigned char *e_ident)
{
	printf(" class:				");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %s>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                         ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELDATA2LSB:
			printf("2's compliment, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %s>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_version - prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:				%d");

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class
 */
void print_osabi(unsigned char *e_ident)
{
        printf("  OS/ABI:                         ");

        switch (e_ident[EI_OSABI])
        {
                case ELFOSABI_NONE:
                        printf("UNIX - system v\n");
                        break;
                case ELFOSABI_HPUX:
                        printf("UNIX - HP-UX\n");
                        break;
                case ELFOSABI_NETBSD:
                        printf("UNIX - NetBSD\n");
                        break;
		case ELFOSABI_LINUX:
                        printf("UNIX - Linux\n");
                        break;
                case ELFOSABI_IRIX:
                        printf("UNIX - IRIX\n");
                        break;
                case ELFOSABI_FREEBSD:
                        printf("UNIX -FreeBSD\n");
                break:
		case ELFOSABI_TRU64:
                        printf("UNIX - TRU64\n");
                        break;
                case ELFOSABI_ARM:
                        printf("UNIX - HP-UX\n");
                        break;
                case ELFOSABI_NETBSD:
                        printf("ARM\n");
			break;
	}
}

/**
 * print_type - prints the data of an ELF header.
 * @e_type: The ELF type.
 * @e_ident: A pointer to an array containing the ELF class
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
        printf("  Type:                         ");

        switch (e_type)
        {
                case ET_NONE:
                        printf("NONE (None)\n");
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
			printf("<unknown: %x>\n", e_type);
	}
}

