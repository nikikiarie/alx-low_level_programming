#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: argument number
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unsigned int op;
	int i, by;
	int (*a)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	by = atoi(argv[1]);
	if (by < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < by; i++)
	{
		op = *(unsigned char *)a;
		printf("%.2x", op);
		if (i == by - 1)
			continue;
		printf(" ");
		a++;
	}
	printf("\n");
	return (0);
}
