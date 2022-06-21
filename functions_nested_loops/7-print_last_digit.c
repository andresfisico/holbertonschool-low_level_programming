#include "main.h"

/**
 * _last_digit - print last digit in number
 * @i: number to evaluatei 
 * Return: last digit in number
 */
int print_last_digit(int i)
{
	if (i < 0)
		i = i * -1;
	_putchar((i % 10) + '0');
	return (i % 10);
		
}
