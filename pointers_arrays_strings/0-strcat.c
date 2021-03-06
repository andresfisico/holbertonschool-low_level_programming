#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings.
 * @src: string to dest
 * @dest: string to src
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
