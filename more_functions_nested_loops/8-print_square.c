#include "main.h"

/**
* print_square - printing square in #
* @n: numbers space
*
* Return: square the #
*/
void  print_square(int n)
{
	int i, j;

	if (n <= 0)
	_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(35);
		}
	_putchar('\n');
	}
}
