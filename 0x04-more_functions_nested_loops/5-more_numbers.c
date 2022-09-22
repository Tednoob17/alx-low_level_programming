#include "main.h"
/**
 * more_numbers - Print 10 times numbers for 0 on 14
 *
 *Return : Void
 *
 */
void more_numbers(void)
{
	int i = 0;
	int n = 0;

	while (i < 10)
	{
		while (n <= 14)
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		i++;
		n = 0;
	}
	_putchar('\n');
}
