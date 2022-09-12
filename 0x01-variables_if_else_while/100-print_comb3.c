#include <stdio.h>

/**
*main -Entry block ( Print only the smallest combination of two digits)
*
*Return:  0 on success. Error code otherwise
*/
int main(void)
{
int n1 = 48, n2 = 49;

while (n1 <= 56)
{
	while (n2 <= 57)
	{
		putchar (n1);
		putchar (n2);
		if (n1 == 56 && n2 == 57)
		{
		break;
		}
		putchar (',');
		putchar (' ');
		n2++;
	}
	n1++;
	n2 = n1++;
}
return (0);
}
