#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: file to read
 * @letters: bytes to read
 * Return: no of bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, z;
	int i;
	char *b;

	if (!filename)
		return 0;
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	b = malloc(sizeof(char) * (letters));
	if (!b)
		return (0);
	z = read(i, b, letters);
	a = write(STDOUT_FILENO, b, z);
	close(i);
	free(b);
	return(a);
}
