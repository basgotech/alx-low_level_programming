#include "main.h"

/**
 * main - Entry point
 * Description: 'print using user defined _putchar function’
 * Return: Always 0 (Success)
 */

int main(void)
{
char msg[] = "_putchar";
int i;
for (i = 0; msg[i] != '\0'; i++)
{
_putchar(msg[i]);
}
_putchar('\n');

return (0);
}
