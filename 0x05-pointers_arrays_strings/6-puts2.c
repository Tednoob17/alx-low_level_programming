#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str:  pointers
 * Return: Void
 */
void puts2(char *str)
{
	int i = 0;
	int m = 0;

	while (str[i] != '\0')
	{
		m++;
		i++;
	}
	i = 0;
	for (i = 0; i < m; i++)
	{
		if (i == 0 || (m % 2 == 0 && i % 2 == 0))
		{
			_putchar(str[i]);
				i++;
		}
	}
	_putchar('\n');
}
