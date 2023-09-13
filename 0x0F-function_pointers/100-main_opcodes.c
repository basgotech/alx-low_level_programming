#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints the opcodes of its own main function.
 * @argc: argument count
 * @argv: argument vector
 * Return: o if success
 */
int main(int argc, char *argv[])
{
int i;
if (argc != 2)
{
printf("Error\n");
exit(1);
}

int num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}

void *main_addr = (void *)main;

for (i = 0; i < num_bytes; i++)
{
printf("%02x ", *(unsigned char *)(main_addr + i));
}

printf("\n");

return (0);
}
