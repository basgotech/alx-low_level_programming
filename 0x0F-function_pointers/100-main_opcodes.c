#include<stdio.h>
#include<stdlib.h>
/**
 * main- Entry point
 *@argc: stores the number of command-line arguments
 *@argv:  is an array of pointers to arrays of character objects
 * Return: 0 in succes
 */
int main(int argc, char *argv[])
{
	int index, z;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	z = atoi(argv[1]);
	if (z < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < z; index++)
	{
		printf("%02hhx", *((char *)main + i));
		if (index < z - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
