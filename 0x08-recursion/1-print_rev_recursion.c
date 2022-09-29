#include "main.h"
/**
* _print_rev_recursion - display the char in reverse with recursion
* @s: pointer
* Return: Void
*/
void _print_rev_recursion(char *s)
{
	int i = 0;
	int w = 0;

	while (s[i] != '\0')
	{
		w++;
		i++;
	}
	i = w;
		while (i >= 0)
		{
			_putchar(*s);
			_print_rev_recursion(s - 1);
			i--;
		}
}

