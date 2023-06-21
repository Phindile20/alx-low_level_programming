#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -
 *
 * @argc: argument count
 *
 * @argv: atgument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int b, c;
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("ERROR\n");
		exit(99);
	}

	function = get_op_func(argv[2]);

	if (function == NULL)
	{
		printf("ERROR\n");
		exit(99);
	}

	b = atoi(argv[1]);
	c = atoi(argv[3]);

	printf("%d\n", function(b, c));
	return (0);
}
