#include <stdio.h>
/*main return 0 (success)*/
/**
 * main - Print the number in 16 base
 *
 * Return: Always  0 (success)
 */
int main(void)
{
int alp = 48;
int base_16 = 97;
	while (alp <= 57)
	{
		putchar(alp);
		alp++;
	}
	while (base_16 <= 102)
	{
		putchar (base_16);
		base_16++;
	}
	putchar('\n');
	return (0);
}
