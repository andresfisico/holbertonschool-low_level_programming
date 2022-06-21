#include "main.h"

/**
 * _last_digit - print last digit in number
 * @i: 
 * Return: last digit in number
 */
int print_last_digit(int i)
{
	i = i % 10;
	_putchar((i % 10) + '0');
	return (i);
		
}
