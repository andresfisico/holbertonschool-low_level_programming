#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string
 * @str: string
 * Return: string.
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar (*(str + i));
		i++;
	}
	_putchar('\n');
}
