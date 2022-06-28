#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse a string
 * @s: char
 *
 * Return: reverse a string
 */
void rev_string(char *s)
{
	int j, i = 0;
 
	while (*(s + i))
	{
		_putchar(*(s + i));
		i++;
	}
	j = i - 1;

	while (*(s + j))
	{
		_putchar(*(s + j));
		j--;
	}
	_putchar('\n');
}
