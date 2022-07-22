#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: address of s
 */
char *leet(char *s)
{
	int i, j;

	char s1[] = "aAeEoOtTlL";

	char s2[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s1[j] == *(s + i))
				*(s + i) = s2[j];
		}
	}
	return (s);
}
