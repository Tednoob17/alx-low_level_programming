#include <stdio.h>
#include "main.h"
/**
* print_array - print all element of integers array
*@a : pointer (int array)
*@n : int contains numbers of elements  of int array
* Return : Void
*/
void print_array(int *a, int n)
{
int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
			if (i == n - 1)
			{
				break;
			}
			printf(",");
			printf(" ");
			i++;
	}
	printf("\n");
}
