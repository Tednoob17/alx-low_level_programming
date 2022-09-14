include "main.h"
/**
* print_alphabet_x10 - print alphabet ten time
*
*Return : Always 0 when it's success .Error otherwise
*/

void print_alphabet_x10(void)
{
int i = 0;
char a = 'a';
	while (i <= 9)
	{
		while (a <= 'z')
		{
			_putchar (a);
			a++;
		}
	_putchar('\n');
	a = 'a';
	i++;
	}
}
