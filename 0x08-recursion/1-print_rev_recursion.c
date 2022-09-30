#include "main.h"
/**
* _print_rev_recursion - display the char in reverse with recursion
* @s: pointer
* Return: Void
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	
}
