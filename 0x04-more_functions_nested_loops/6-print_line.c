#include "main.h"
/**
* print_line - print underscore in function of n number
* @n : number
* Return: Void
*/
void print_line(int n)
{
	int i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;
		}
		i = 0;
		_putchar('\n');
}
