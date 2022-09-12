#include <stdio.h>
/**
*main - display the comb 
*
*Return : Always 0(success) 
*/


/*012 .. 019 | 023..029|099....| 123 .. 124 .. 129| 134 .. 145 |234..345....456...567..678..789*/
int main(void) 
{
int n1=48;
int n2=49;
int n3=50;

	while (n2 <= 58)
	{
		putchar (n1);
		putchar (n2);
		putchar (n3);
		putchar (',');
		putchar (' ');
		n3++;
			if (n3 == 58)
			{
				n2++;
				n3=n2++;
			}
	
	}
	
	
	

return (0);
}
