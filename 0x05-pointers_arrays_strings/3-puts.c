#include "main.h"
/**
 * _puts -  display it the string
 *
 *@str : pointers using in parameters
 *Return : Void
 */
void _puts(char *str)
{
	int i = 0;

	if (*str)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
}
