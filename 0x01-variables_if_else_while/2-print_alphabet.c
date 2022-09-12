#include<stdio.h>
#include <stdlib.h>
/**
*main -Open block (Display the alphabet)
*
*Return : always 0 (success)
*/

int main(void)
{
int a='a';
	while (a<='z')
	{
	putchar(a);
	a++;
	}
	putchar('\n');
return (0);
}
