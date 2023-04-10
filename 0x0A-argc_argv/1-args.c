#include <stdio.h>
/**
 * main - Print the number of arguments passed to the program
 *
 * @argc: argument count
 *
 * @argv: unused variable
 *
 * Return: 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
