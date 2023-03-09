#include "main.h"
/**
*times_table - print hour with array
*Return :Void
*/
void times_table(void)
{
	int a = 0, b = 0, c = 0, i = 0, j = 0;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", a);
		printf(",");
		printf(" ");
		for (j = 0; j < 9; j++)
		{
			b = i * c;
			if (b >= 10)
			{
				printf("%d", b);
				printf(",");
				printf(" ");
			}
			else if (j == 8)
			{
				break;
			}
			else
			{
				printf(" ");
				printf("%d", b);
				printf(",");
			}
			c = c + 1;
		}
		c = 1;
			printf("\n");
		}
}
