#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: 1st string pointer
 * @s2: 2st string pointer
 * @n: bytes to concat
 * Return: pointer to string concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a, b, s1l, s2l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1l = 0; s1[s1l] != '\0'; s1l++)
		;
	for (s2l = 0; s2[s2l] != '\0'; s2l++)
		;
	str = malloc(s1l + n + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		str[a] = s1[a];
	for (b = 0; b < n; b++)
	{
		str[a] = s2[b];
		a++;
	}
	str[a] = '\0';
	return (str);

}
