#include<stdio.h>
#include<stdlib.h>
/**
*_atoi - a function that convert a string to an integer.
*@s: file manipulated data type.
*Return: return atoi vale
*/
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;

do {
if (*s == '-')
{
sign *= -1;
}
else if (*s >= '0' && *s <= '9')
{
num = (num * 10) + (*s - '0');
}
else if (num > 0)
{
break;
}
s++;
} while (*s);

return (num *sign);
}
/**
 * main- Entry point
 *@argc: the number of parameters.
 *@argv: the parameeters in the case the number ob bytes.
 * Return: 0 in succes
 */
int main(int argc, char *argv[])
{
	int i, n;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = _atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < n - 3)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
