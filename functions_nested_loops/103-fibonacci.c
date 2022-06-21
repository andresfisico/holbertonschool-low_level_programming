#include <stdio.h>

/**
 * main - print number fibonacci
 * Description:  program that finds and prints the sum of the even-valued terms
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, suma = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			suma += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", suma);
	return (0);
}
