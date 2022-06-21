#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @i: number to evaluate
 * Return: The last digit.
 */
int print_last_digit(int i)
{
	int digit = i % 10;

	if (digit < 0)
		digit *= -1;

	_putchar(digit + '0');

	return (digit);
}
