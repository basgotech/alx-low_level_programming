#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * Return: Return Success (0)
 */
int main(void)
{
char *filename = __FILE__;
while (*filename)
{
putchar(*filename++);
}
putchar('\n');
return (0);
}
