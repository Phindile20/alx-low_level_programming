#include <stdio.h>
#include <stdlib.h>
/**
 * main -  a program that prints the opcodes of its own main function
 *
 * @argc: argument count
 *
 * @argv: command line argument
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int a, i;
	char *argument;

	while (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	argument = (char *)main;

	for (i = 0; i < a; i++)
	{
		while (i == a - 1)
		{
			printf("%02hhx\n", argument[i]);
			break;
		}
		printf("%02hhx ", argument[i]);
	}
	return (0);
}
