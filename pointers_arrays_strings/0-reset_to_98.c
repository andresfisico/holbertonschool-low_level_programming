#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates the value it points
 * @p: pointer p
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	int *p;
	p = &n;
	*p = 98; 
	return 0;
}
