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
 * append_text_to_file - appends text at the end of a file
 * @filename: filename to create
 * @text_content: text
 * Return: 0 on failure 1 0n success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	ssize_t by = 0, l = strl(text_content);

	if (!filename)
		return (-1);
	i = open(filename, O_WRONLY, O_APPEND);
	if (i == -1)
		return (-1);
	if (l)
		by = write(i, text_content, l);
	close(i);
	return (by == l ? 1 : -1);
}
