#include "main.h"
#include <stdio.h>


/**
 * print_array - print elements to array
 * @n: number elements array
 * @a: name punter array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}

