#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - generate random pass_value but its valid
*
* Return: Always 0.
*/
int main(void)
{
char pass_value[84];
	int  sum = 0, dif_middle1, index_value = 0, dif_middle2;

	srand(time(0));

	while (sum < 2772)
	{
		pass_value[index_value] = 33 + rand() % 94;
		sum += pass_value[index_value++];
	}

	pass_value[index_value] = '\0';

	if (sum != 2772)
	{
		dif_middle1 = (sum - 2772) / 2;
		dif_middle2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			dif_middle1++;

		for (index_value = 0; pass_value[index_value]; index_value++)
		{
			if (pass_value[index_value] >= (33 + dif_middle1))
			{
				pass_value[index_value] -= dif_middle1;
				break;
			}
		}
		for (index_value = 0; pass_value[index_value]; index_value++)
		{
			if (pass_value[index_value] >= (33 + dif_middle2))
			{
				pass_value[index_value] -= dif_middle2;
				break;
			}
		}
	}

	printf("%s", pass_value);

	return (0);
}
