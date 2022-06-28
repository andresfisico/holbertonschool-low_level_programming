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
	if (j % 2 == 0)
		for (j = ( i / 2); j < i; j++)
		{
			_putchar(*(str + j));
		}
	_putchar('\n');
}
