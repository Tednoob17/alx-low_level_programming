#include "main.h"
/**
 * print_last_digit - return last digit
 * @n : number to check
 * Return:0 or 1
 */
int print_last_digit(int n)
{
int j;
	if (n < 0)
	{
		j = -1 * (n % 10);
	}
	else if (n > 0)
	{
		j = (n % 10);
	}
	else
	{
		j = 0;
	}
	_putchar (j + '0');
	return (j);
	_putchar ('\n');
}

