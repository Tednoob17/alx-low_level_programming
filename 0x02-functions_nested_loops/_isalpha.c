#include "main.h"
/*
*main - check the code.
*
*
*Return : Always success error otherwise
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}

	_putchar ('\n');
}

