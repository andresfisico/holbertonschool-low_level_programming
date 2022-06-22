#include "main.h"

/**
* more_numbers - print number in 0 to 14, in a column
*
*
* Return: numbers in a column
*/
void more_numbers(void)
{
	int i, j, z;

	for (z = 0; z < 10; z++)
	{
		for (i = 48; i < 58; i++)
			putchar(i);

		for (j = 48; j < 53; j++)
		{	
		putchar(49);
		putchar(j);
		}       

	putchar('\n');
	}
}
