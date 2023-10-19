#include "main.h"

/**
 * leet - encodes a string into 1337
 * @v: input
 * Return: v
 */

char *leet(char *v)
{
	int i, j;
	char s[] = "aAeEoOtTlL";
	char t[] = "4433007711";

	for (i = 0; v[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (v[i] == s[j])
				v[i] = t[j];
		}
	}
	return (v);
}
