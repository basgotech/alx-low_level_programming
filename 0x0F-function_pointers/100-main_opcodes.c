#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int i;
if (argc != 2)
{
printf("Usage: ./100-main_opcodes.c number_of_bytes\n");
exit(1);
}

int num_bytes = atoi(argv[1]);

void *main_addr = (void *)main;

for (i = 0; i < num_bytes; i++)
{
printf("%02x ", *(unsigned char *)(main_addr + i));
}

printf("\n");

return (0);
}
