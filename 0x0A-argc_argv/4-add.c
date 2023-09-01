#include <stdio.h>
#include <stdlib.h>
/**
 * main- a program that adds positive numbers.
 *  @argc: argument count
 *  @argv:argument vector.
 *  Return: return 0
 */
int main(int argc, char *argv[])
{

int add, n, i, j, k;

add = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("Error\n");
return (1);
}
}
}

for (k = 1; k < argc; k++)
{
n = atoi(argv[k]);
if (n >= 0)
{
add += n;
}
}

printf("%d\n", add);
return (0);
}
