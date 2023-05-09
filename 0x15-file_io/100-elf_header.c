/**
 * _strncmp - compares two strings
 * @string1: the first string
 *@string2: the second string
 *@n: the maximum number of bytes to compare
 *Return: 0 if the first n bytes of s1 and s2 are equal, otherwise non-zero
 */
int _strncmp(const char *string1, const char *string2, size_t n)
{
	for (; n && *string1 && *string2; --n, ++string1, ++string2)
	{
		if (*string1 != *string2)
			return (*string1 - *string2);
	}
	if (n)
	{
		if (*string1)
			return (1);
		if (*string2)
			return (-1);
	}
	return (0);
}
/**
 * _close - closes a file descriptor and prints an error message upon failure
 * @fd: the file descriptor to close
 */
void _close(int file_descriptor)
{
	if (close(file_descriptor) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't close fd\n", 22);
	exit(98);
}
/**
 *_read - reads from a file and prints an error message upon failure
 *@fd: the file descriptor to read from
 *@buffer: the buffer to write to
 *@count: the number of bytes to read
 */
void _read(int file_descriptor, char *buffer, size_t count)
{
	if (read(file_descriptor, buffer, count) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't read from file\n", 28);
	_close(file_descriptor);
	exit(98);
}
/**
 * elf_magic - prints ELF magic
 *
 * @header: the ELF header
 */
void elf_magic(const unsigned char *header)
{
	unsigned int i;

	if (_strncmp((const char *)header, ELFMAG, 4))
	{
		write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
		exit(98);
	}

	printf("ELF Header:\n Magic: ");

	for (i = 0; i < 16; ++i)
		printf("%02x%c", header[i], i < 15 ? ' ' : '\n');
}

/**
 *elf_class - prints ELF class
 *
 * @header: the ELF header
 *
 *Return: bit mode (32 or 64)
 */
size_t elf_class(const unsigned char *header)
{
	printf(" %-34s ", "Class:");

	if (header[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
		return (64);
	}
	if (header[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
		return (32);
	}
	printf("<unknown: %x>\n", header[EI_CLASS]);
	return (32);
}

/**
 * elf_data - prints ELF data
 *
 * @header: the ELF header
 *
 *Return: 1 if big endian, otherwise 0
 */
int elf_data(const unsigned char *header)
{
	printf(" %-34s ", "Data:");

	if (header[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
		return (1);
	}
	if (header[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
		return (0);
	}
	printf("Invalid data encoding\n");
	return (0);
}

/**
 *
 * elf_entry - print ELF entry point address
 *
 *  @buffer: the ELF header
 *
 * @bit_mode: the bit mode (32 or 64)
 */
void elf_entry(const unsigned char *buffer, size_t bit_mode)
{
	unsigned long long entry;

	printf(" %-34s ", "Entry point address:");

	if (bit_mode == 32)
		entry = *((unsigned int *) (buffer + EI_NIDENT + 24));
	else
		entry = *((unsigned long long *) (buffer + EI_NIDENT + 24));
	printf("%#llx\n", entry);
}

/**
 *main - program entry point
 *
 * @argc: the argument count
 *
 * @argv: the argument vector
 *
 *Return: 0 on success, otherwise 1
 */
int main(int argc, char **argv)
{
	int fd;
	unsigned char buffer[EI_NIDENT + sizeof(Elf64_Ehdr)];
	size_t bit_mode;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header ELF_FILE\n", 27);
		return (1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(STDERR_FILENO, "Error: Can't open file\n", 23);
		return (1);
	}

	_read(fd, (char *) buffer, EI_NIDENT + sizeof(Elf64_Ehdr));
	elf_magic(buffer);
	bit_mode = elf_class(buffer);
	elf_data(buffer);
	elf_version(buffer);
	elf_osabi(buffer);
	elf_abivers(buffer);
	elf_type(buffer);
	elf_entry(buffer, bit_mode);

	_close(fd);
	return (0);
}
