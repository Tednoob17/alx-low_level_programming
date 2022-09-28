#include "main.h"
/**
* _strlen - print size of char
*
*@s: char send in parameter
*
*Return:  size of char
*/
int _strlen(char *s)
{
int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
return (n);
}
