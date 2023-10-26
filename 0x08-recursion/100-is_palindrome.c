#include "main.h"

int prime(int n, int i);
/**
 * slen - string length
 * @k: string
 * Return: length of string
 */
int slen(char *k)
{
	if (*k == '\0')
		return (0);
	else
		return (1 + slen(k + 1));
}

/**
 * check - compares strings
 * @c: string
 * @i: least iterator
 * @j: largest iterator
 * Return: 0 or 1
 */
int check(char *c, int i, int j)
{
	if (*(c + i) == *(c + j))
	{
		if (i == j || j == i + 1)
			return (1);
		return (0 + check(c, i + 1, j - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 * Return: 1 if palidrome
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check(s, 0, slen(s) - 1));

}
