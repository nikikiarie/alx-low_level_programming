#include "main.h"

/**
 * rot13 - rot13 encoder
 * @c: string pointer
 * Return: *s
 */

char *rot13(char *c)
{
	int i, j;
	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYX";
	char dr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0' ; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == d1[j])
			{
				c[i] = dr[j];
				break;
			}
		}
	}
	return (c);
}
