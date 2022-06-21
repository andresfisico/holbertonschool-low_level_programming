#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number print
 * Return:0
 */

void print_to_98(int n)
{
	int i, j, z = 0;

	j = 98; 

	if (n <= j)
	{
		for (i = n; i <= j; i++)
		{
			z == 0 ? z = 1 : printf(", ");
			printf("%d", i);
		}
	}
	else
	{
		for (i = n; i >= j; i--)
		{
			z == 0 ? z = 1 : printf(", ");
			printf("%d", i);
		}
	}
	putchar('\n');
}
