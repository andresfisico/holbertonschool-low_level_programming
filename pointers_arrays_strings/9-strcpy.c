#include "main.h"
#include <stdio.h>


/**
 * *_strcpy(char *dest, char *src) - print elements to array
 * @dest: number elements array
 * @src: name punter array
 * Return: value the pointer to desti
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

