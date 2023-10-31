#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  copy of the string
 * @str: string to copy
 * Return: copied string
 */
char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *c;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	c = malloc((sizeof(char) * i) + 1);
	if (c == NULL)
		return (NULL);
	while (j < i)
	{
		c[j] = str[j];
		j++;
	}
	return (c);
}
