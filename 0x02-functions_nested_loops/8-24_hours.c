#include "main.h"
/**
 *function -Display 24-h time 
 *
 *Return :None 
 *
 */
void jack_bauer(void)
{
int n1 = 48, n2 = 48, n3 = 48, n4 = 48;
while(n1 <= 50)
{
    while(n2 <= 51)
    {
	while(n3 <= 53)
	{
	     while(n4 <= 57)
	     {
		_putchar(n1);
		_putchar(n2);
		_putchar(':');
		_putchar(n3);
		_putchar(n4);
		_putchar('\n');
		n4++;
	    }
             n3++;
	     n4 = 48;
	}
	  n2++;
	  n3 = 48;
	  n4 = 48;
   }
    n1++;
    n2 = 48;
    n3 = 48;
    n4 = 48;
}		

}
