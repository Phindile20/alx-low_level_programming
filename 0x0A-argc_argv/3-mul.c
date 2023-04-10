#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that multiplies two numbers
 *
 * @argc: Argument count
 *
 * @argv: Points to arguments being passed
 *
 * Return: 0 - if sucessful
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n"); /* print Error */
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2])); /* print the result */
	return (0);
}
