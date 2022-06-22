#include "main.h"

/**
* _isdigit - determines if a digit is between 0 and 9
* @c: character to evaluate
* Return: 0 or 1
*/
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);


}
