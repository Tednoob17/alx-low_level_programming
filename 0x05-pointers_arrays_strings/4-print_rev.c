#include "main.h"
/**
 * print_rev - Display the sentences in reverse sens
 *
 * @s : Variable pointers contains the string
 * Return: Void
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
