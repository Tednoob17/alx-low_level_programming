#include <unistd.h>
#include "main.h"
/**
* fizz_buzz - print value to 1 into 100
*
*@size : value display
*
*Return:Void
*/
void fizz_buzz(void)
{
	int i = 0;
		for (i = 1;i <= 100;i++)		
		{
			_putchar(i);
				if (i > 9)
				{
					_putchar(i / 10 + '0');
					_putchar(i % 10 + '0');
				}
				else if (i % 3 == 0)
					write (1,"Fizz",4);
				else if (i % 5 == 0)
					write (1,"Buzz",4);
				else if (i % 3 == 0 && i % 5 == 0)
					write (1,"FizzBuzz",8);	
		}
	_putchar('\n');
}
