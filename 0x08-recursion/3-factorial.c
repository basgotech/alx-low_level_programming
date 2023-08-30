#include "main.h"
/**
 *factorial - a function that returns the-
 *factorial of a given number.
 *@n: a givern number to calculate factorial
 *Return: factorial
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}

}
