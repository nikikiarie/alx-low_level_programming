#include "main.h"
/**
 * strl - find str length
 * @str: string
 * Return: int
 */
int strl(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str++)
		i++;
	return (i);
}
/**
 * create_file - creates a file
 * @filename: filename to crate
 * @text_content: text
 * Return: 0 on failure 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	ssize_t by = 0, l = strl(text_content);

	if (!filename)
		return (-1);
	i = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (i == -1)
		return (-1);
	if (l)
		by = write(i, text_content, l);
	close(i);
	return (by == l ? 1 : -1);
}
