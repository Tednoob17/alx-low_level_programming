#include "main.h"
/**
 * _atoi - change the string in a int S
 * @s : a pointer in char
 *Return : a
 *
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int sign  = 1;

	while (s[i] != '\0')
	{
		
		if(s[i] >= 48 && s[i] <= 57)
		{
			if( n == 0)
			{
				n = s[i];
			}
		
		
		
		}
		
		
		
		i++;
		
	}
	return ( sign * n);
}
