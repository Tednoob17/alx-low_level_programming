#include <stdio.h>

/*main return 0 (success)*/
/**
 * main - Print the alphabet
 *
 * Return:  0 on success. Error code otherwise
 */
int main(void)
{
int alp=48;
int base_16='a';
	while(alp <= 57)
	{
		putchar(alp);
		alp++;
	}
	
	putchar('\n');
	return (0);
}
