#include <unistd.h>

/**
* _putchar - display the char
*@c : the char when we want display
* Return: the char 
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
