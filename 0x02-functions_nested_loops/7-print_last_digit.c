#include "main.h"
/**
 * print_last_digit - return last digit
 * @n : number to check
 * Return:0 or 1
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		return (-n % 10 + '0');
	}
	else if (n > 0)
	{
		return (n % 10 + '0');
	}
	else
	{
		return (0);
	}

	_putchar ('\n');
}

