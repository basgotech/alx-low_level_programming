#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function of the program
 * @argc: the number of arguments being passed
 * @argv: argument vector
 * Return: Always 0 (Successful)
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
char operator;
int (*f)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

f = get_op_func(argv[2]);
if (f == NULL)
{
printf("Error\n");
exit(99);
}

operator = *argv[2];
if ((operator == '/' || operator == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}

result = f(num1, num2);
printf("%d\n", result);
return (0);
}
