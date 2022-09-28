#include "main.h"
/**
 * puts_half - print half of char in parameters
 *
 * @str: pointer
 * Return: Void
 */
void puts_half(char *str)
{
	int i = 0;
	int m = 0;
	int temp = 0;

	while (str[i] != '\0')
	{
		m++;
		i++;
	}
		temp = m / 2;
		if (m % 2 == 0)
		{
			while (str[temp] != '\0')
			{
				_putchar(str[temp]);
				temp++;
			}
		}
		else if (m % 2 == 1)
		{
			temp = (m - 1) / 2;
			while (str[temp] != '\0')
			{
				_putchar(str[temp]);
				temp++;
			}
		}
}
