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
int main(int argc, char *argv[])
{
int i, size;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

size = atoi(argv[1]);
if (size < 0)
{
printf("Error\n");
exit(2);
}

for (i = 0; i < size; i++)
{
printf("%02hhx", *((char *)main + i));
if (i < size - 1)
printf(" ");
else
printf("\n");
}
return (0);
}
