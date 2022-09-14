#include "main.h"
/*
*main - check the code.
*
*
*Return : Always success error otherwise
*/
int print_last_digit(int n)
{
	if ( n < 0 )
	{
		return ( -n % 10);
	}
	else if ( n > 0)
	{
		return (n % 10);
	}
	else
	{
		return (0);
	}

	_putchar ('\n');
}

