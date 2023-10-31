#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int wlen(char *str);
int wcnt(char *str);
/**
 * wlen - locates index of first word
 * @str: string
 * Return: index mark of end of first word
 */

int wlen(char *str)
{
	int i = 0, l = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		l++;
		i++;
	}
	return (l);
}
/**
 * wcnt - counts words in string
 * @str: string
 * Return: int
 */

int wcnt(char *str)
{
	int i = 0, w = 0, l = 0;

	for (i = 0; *(str + i); i++)
		l++;
	for (i = 0; i < l; i++)
		if (*(str + i) != ' ')
		{
			w++;
			i += wlen(str + i);
		}
	return (w);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: pionter
 */

char **strtow(char *str)
{
	char **st;
	int i = 0, words, letters, y, m;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = wcnt(str);
	if (words == 0)
		return (NULL);
	st = malloc(sizeof(char *) * (words + 1));
	if (st == NULL)
		return (NULL);
	for (y = 0; y < words; y++)
	{
		while (str[i] == ' ')
			i++;
		letters = wlen(str + i);
		st[y] = malloc(sizeof(char) * (letters + 1));
		if (st[y] == NULL)
		{
			for (; y >= 0; y--)
				free(st[y]);
			free(st);
			return (NULL);
		}
		for (m = 0; m < letters; m++)
			st[y][m] = str[i++];
		st[y][m] = '\0';
	}
	st[y] = NULL;
	return (st);
}
