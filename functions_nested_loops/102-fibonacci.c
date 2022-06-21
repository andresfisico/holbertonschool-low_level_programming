#include <stdio.h>

/**
 * main - main print fibonacci sequence
 * Description: Print the first 100 fibonacci numbers, starting with 1 and 2.
 * Return: 0
 */
int main(void)
{
	int count = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%lu, ", i);
	while (count <= 100)
	{
		if (count == 100)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		k = j;
		j += i;
		i = k;
		count++;
	}

	return (0);
}
