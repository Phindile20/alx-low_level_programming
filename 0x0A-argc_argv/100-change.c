#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the minimum number of coins to make change
 *
 * @argc: argument count
 *
 * @argv: points to argument being passed
 *
 * Return: 0 - if successful.
 */
int main(int argc, char **argv)
{
int coins, nCoins = 0;

if (argc == 1 || argc > 2)
{
printf("Error\n"); /* print error */
return (1);
}

coins = atoi(argv[1]);
while (coins  > 0)
{
if (coins >= 25) /* true */
coins -= 25;
else if (coins >= 10)
coins -= 10;
else if (coins >= 2)
coins -= 2;
else if (coins >= 1)
coins -= 1;
nCoins += 1; 
}
printf("%d\n", nCoins);
return (0);
}
