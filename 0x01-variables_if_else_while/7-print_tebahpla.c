#include<stdio.h>

/**
*main - Open block (Display the  rev alphabet)
*
*Return:  Always 0 (success)
*/

int main(void)
{
int a;
a = 'z';
while (a >= 'a')
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}
