#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string every character
 *
 * Return: null
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + 2*i));
		i++;
	}
	_putchar('\n');
}
