#include<stdio.h>
#include <stdlib.h>
/**
*main -Open block (Display the alphabet in lower and uppercase)
*
*Return:  Always 0 (success)
*/

int main(void)
{
int a = 'a';
int b = 'A';
	while (a <= 'z')
	{
	putchar(a);
	a++;
	}
	while (b <= 'Z')
	{
	putchar(b);
	b++;
	}
	putchar('\n');
return (0);
}
