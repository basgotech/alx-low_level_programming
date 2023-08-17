#include <stdio.h>

/**
 * main - fizz buzz
 *
 * Return: Always 0.
 */

int main(void)
{

int y;

for (y = 1; y <= 100; y++)
{
if (y % 3 == 0 && y % 5 == 0)
{
printf("FizzBuzz");
}
else if (y % 5 == 0)
{
printf("Buzz");
}
else if (y % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%d", y);
}

if (y == 100)
continue;
printf(" ");

}


printf("\n");

return (0);

}
