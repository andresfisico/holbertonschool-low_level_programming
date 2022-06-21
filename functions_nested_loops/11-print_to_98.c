#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number print
 * Return:0
 */

void print_to_98(int n)
{
	int i, target, comma = 0;

	target = 98;  /* Change this value to adjust number to print to */

	if (n <= target)
	{
		for (i = n; i <= target; i++)
		{
			comma == 0 ? comma = 1 : printf(", ");
			printf("%d", i);
		}
	}
	else
	{
		for (i = n; i >= target; i--)
		{
			comma == 0 ? comma = 1 : printf(", ");
			printf("%d", i);
		}
	}
	putchar('\n');
}
