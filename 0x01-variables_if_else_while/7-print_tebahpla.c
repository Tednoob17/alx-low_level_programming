#include <stdio.h>

/*main return 0 (success)*/
/**
 * main - Print the alphabet
 *
 * Return:  0 on success. Error code otherwise
 */
 int main(void)
{
int alp='z';
	while(alp >= 'a')
	{
	  putchar(alp);
	 alp--;
		
	}
	putchar('\n');
	return (0);
}
