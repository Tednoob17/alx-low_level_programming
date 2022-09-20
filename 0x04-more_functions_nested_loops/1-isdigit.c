#include "main.h"
/**
 * _isdigit - check for digits number letter
 * @c : character to check the case
 * Return:0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
