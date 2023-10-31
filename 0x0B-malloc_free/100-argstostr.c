#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arg count
 * @av: arg vector
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	int st = 0, a = 0, b = 0, c = 0;
	char *i;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		while (av[a][b])
		{
			st++;
			b++;
		}
		b = 0;
		a++;
	}
	i = malloc((sizeof(char) * st) + ac  + 1);
	a = 0;
	while (av[a])
	{
		while (av[a][b])
		{
			i[c] = av[a][b];
			c++;
			b++;
		}
		i[c] = '\n';
		b = 0;
		c++;
		a++;
	}
	c++;
	i[c] = '\0';
	return (i);
}
