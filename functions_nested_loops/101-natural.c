#include <stdio.h>

/**
 * main -  If we list all the natural numbers below
 * Return: ---
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j += i;
		}
	}
	printf("%d\n", j);
	return (0);
}
