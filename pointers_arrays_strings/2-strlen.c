#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of a string
 * @s: string
 * Return: i length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}