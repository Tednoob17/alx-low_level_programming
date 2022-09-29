#include "main.h"
/**
 * _puts_recursion - display the string with recursive
 * @s: pointer
 * Return: Void
 */
void _puts_recursion(char *s)
{
int i = 0;
int w = 0;

	if (s)
	{
		if (*s != '\0')
		{
			_putchar(*s);
			_puts_recursion(s + 1);
		}
	}
}
