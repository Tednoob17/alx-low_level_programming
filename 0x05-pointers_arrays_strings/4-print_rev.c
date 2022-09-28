#include "main.h"
/**
 * print_rev - Display the sentences in reverse sens
 *
 * @s : Variable pointers contains the string
 * Return: Void
 */
void print_rev(char *s)
{
	int i = 0;
	int n = 0;

	if (*s)
	{
		while (s[i] != '\0')
		{
			n++;
			i++;
		}

		for (i = n; i >= 0; i--)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
