#include "main.h"
/**
*main -Print alphabet
*
*Return : on success (0) error otherwise
*/
void print_alphabet(void)
{
	char a = 'a';
	while ( a <= 'z')
	{
		_putchar (a);
		a++;
	
	}
	_putchar('\n');

}
