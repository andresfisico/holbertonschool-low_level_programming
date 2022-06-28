#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string every character
 *
 * Return: null
 */
void puts_half(char *str)
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
	else 
		for (j = (i - 1)/2; j < i ;j++)
		{
			_putchar(*(str + (j + 1)));
		}
	_putchar('\n');
}
