#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates the value it points
 * @p: pointer p
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	int *p; // Se declara el puntero p
	p = &n; // Se le asigna la dirección de n
	*p = 98; // Se actualiza el valor que apunta a 98 
	return 0;
}
