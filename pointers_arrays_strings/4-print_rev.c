#include "main.h"
#include <stdio.h>

/**
 * _print_rev - print a string reverse
 * @s: string
 * Return: string reverse.
 */

void pritn_rev(char *s)
{
	int j, i = 0;

	while (*(s + i))
	{
		i++;
	}
	j = i;

	while (*(s + (j - 1)))
	{ 
		_putchar(*(s + (j - 1)));
		i--;
	}
	_putchar('\n');
}
