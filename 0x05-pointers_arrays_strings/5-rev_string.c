#include "main.h"
/**
 * rev_string - print string in parameters on reverse
 *
 * @s: pointers contains a string
 *
 *Return: Void
 */
void rev_string(char *s)
{
	int i = 0;
	int m = 0;
	int half = 0;
	char c;

	while (s[i] != '\0')
	{
		m++;
		i++;
	}
	i = 0;
	half = m / 2;
	while (half >= 0)
	{
		c = s[i];
		s[i] = s[m - i - 1];
		s[m - i - 1] = c;
		i++;
		half--;
	}
}
