#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse a string
 * @s: char
 *
 * Return: reverse a string
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char ss[20];

	while (*(s + i))
	{
		*(ss + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(ss + j);
		j++;
		i--;
	}
}
