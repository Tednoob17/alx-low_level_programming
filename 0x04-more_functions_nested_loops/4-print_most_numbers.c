#include "main.h"
#include <stdio.h>
/**
 *print_most_numbers - print the number except 2 and 4
 *
 *Return :Void
 */
void print_most_numbers(void)
{
	int a = 48;

	while (a <= 57)
	{
		if (a == 50 || a == 52)
		{
			a++;
		}
	putchar(a);
	a++;
	}
	putchar('\n');
}
