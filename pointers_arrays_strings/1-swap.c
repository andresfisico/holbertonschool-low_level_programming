#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first int to swap
 * @b: second int to swap
 *
 * Return: null
 */
void swap_int(int *a, int *b)
{
	int a;

	a = *a;
	*a = *b;
	*b = a;

}

