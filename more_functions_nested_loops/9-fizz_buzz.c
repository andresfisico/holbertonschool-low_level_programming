#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	for (i = 1; i < 101; i++)
		{
			if (i%3==0 && i%5!=0)
				{
				printf("Fizz ");
				}
            	else if (i%5==0 && i%3!=0)
				{
				printf("Buzz ");
				}
				else if (i%3==0 && i%5==0)
				{
				printf("FizzBuzz ");
				}
				else printf("%d ",i);
		}
}
