#include "main.h"
/**
* print_diagonal - display backslash in function of n number
* @n: number
* Return: Void
*/
void print_diagonal(int n)
{
	int i = 0;
	int m = 0;

		while (i <= n)
		{
			while (m <= i)
			{
				_putchar(' ');
				m++;
			}
			if (n <= 0)
			{
				_putchar('\n');
			}
			m = 0;
			_putchar(92);
			_putchar('\n');
			i++;
		}
		if (n < 0)
		{
			_putchar('\n');
		}
}
