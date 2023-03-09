#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print a number for n to 98
*@n :integer giving in parameters
*
* return: Void
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n == 98)
			    {break; }
			 printf(",");
			 printf(" ");
			 n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n == 98)
			{break; }
			printf(",");
			printf(" ");
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n == 98)
			{break; }
			printf(",");
			printf(" ");
			n--;
		}
	}
	printf("\n");
}
