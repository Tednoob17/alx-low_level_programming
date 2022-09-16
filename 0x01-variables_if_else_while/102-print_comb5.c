#include <stdio.h>
/**
*main -Entry block ( Print only the smallest combination of two digits)
*
*Return:  0 on success. Error code otherwise
*/
int main(void)
{
int n1 = 48, n2 = 48, n3 = 48, n4 = 49;


//while (n1 <= 57)
//{
		while (n2 <= 56)
		{
			while (n3 <= 57)
			{
				while (n4 <= 57)
				{
					putchar(n1);
					putchar(n2);
					putchar(' ');
					putchar(n3);
					putchar(n4);
						if (n1 == 57 && n2 == 56 && n3 == 57 && n4 == 57)
						{
							break;
						}
					putchar(',');
					putchar(' ');
					n4++;
				}
				n3++;
				n4 = 0;
			}
				n2++;
				n3 = 0;
				n4 = 0;
		}
	//	n1++;
	//	n2 = n1 +1;
	//	n3 = n2 +1;
	//	n4= n3 + 1;
//}
return (0);
}
