#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that adds positive numbers
 *
 * @argc: number of command line arguments or argument count
 *
 * @argv: array that contains the program command line arguments
 * or argument vector
 *
 * Return: 0 if the is an error
 * return 1 if the is no error
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	a = 1;
	b = 0;
	c = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		c += atoi(argv[a]);
	}
	printf("%d\n", c);
	return (0);
}
