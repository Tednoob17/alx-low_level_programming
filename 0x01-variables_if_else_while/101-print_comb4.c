#include <stdio.h>
/**
*main -Entry block ( Print only the smallest combination of two digits)
*
*Return:  0 on success. Error code otherwise
*/
int main(void)
{
int n1 = 48, n2 = 49, n3 = 50;


while (n1 <= 55)
{
	while (n2 <= 56)
	{
		while (n3 <= 57)
		{
			putchar(n1);
			putchar(n2);
			putchar(n3);
			if (n1 == 55 && n2 == 56 && n3 == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			n3++;
		}
			n2++;
			n3 = n2 + 1;
	}
		n1++;
		n2 = n1 + 1;
		n3 = n2 + 1; 	
}	
return (0);
}
