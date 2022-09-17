#include "main.h"
/**
 *function - this funtion return 1 if number is a uppercase and 0 otherwise
 *@c :this value is a number that we verify
 *
 *Return :0 otherwise 1
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
		return (1);
}
