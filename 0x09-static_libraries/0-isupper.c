#include "main.h"
/**
 * _isupper - check for upper case letter
 * @c : character to check the case
 * Return:0 or 1
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
