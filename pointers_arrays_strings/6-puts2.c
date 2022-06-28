#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string every character
 *
 * Return: null
 */
void puts2(char *str)
{
	int i = 0, j;

	while (*(str + i))
	{
		i++;
	}
	j = i;
	
	for (j = 0; j < i; j++ )
	{
		if (j % 2 == 0)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
