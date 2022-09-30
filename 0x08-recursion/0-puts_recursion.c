#include "main.h"
/**
 * _puts_recursion - display the string with recursive
 * @s: pointer
 * Return: Void
 */
void _puts_recursion(char *s)
{
	if (s)
	{
		if (*s != '\0')
		{
			_putchar(*s);
			_puts_recursion(s + 1);
		}
		else
			_putchar('\n');
	}
}
