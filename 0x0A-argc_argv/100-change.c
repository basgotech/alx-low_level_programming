#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * main - a program that prints the minimum number-
 *  of coins to make change for an amount of money.
 *@argc: This is the number of arguments
 *@argv: This is the array of arguments
 *Return: pn sucess return 0;
 */

int main(int argc, char *argv[])
{
int num, k, result = 0;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

num = atoi(argv[1]);
if (num < 0)
{
printf("0\n");
return (0);
}
for (k = 0; k < 5 && num >= 0; k++)
{
while (num >= coins[k])
{
result++;
num -= coins[k];
}
}

printf("%d\n", result);
return (0);
}
