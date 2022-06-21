#include "main.h"

/**
 * print_times_table - print a matriz n*n
 * @n:Number of multiplication table
 * Return:---
 */

void print_times_table(int n)

	int i, j, z, w = 0;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			w = 0;
			for (j = 0; j <= n; j++)
			{
				z = i * j;
				w == 0 ? w = 1 : _putchar(',') && _putchar(' ');
				if (product <= 9)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(i * j + '0');
				}
				else if (product <= 99)
				{
					_putchar(' ');
					_putchar(z / 10 + '0');
					_putchar(z % 10 + '0');
				}
				else
				{
					_putchar(z / 100 + '0');
					_putchar((z / 10) % 10 + '0');
					_putchar(z % 10 + '0');
				}
			} _putchar('\n');
		}
	}
}
