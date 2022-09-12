#include <stdio.h>

/*main return 0 (success)*/
/**
 * main - Print the alphabet
 *
 * Return:  0 on success. Error code otherwise
 */
 int main(void)
{
int alp='a';
	while(alp <= 'z')
	{
		if(alp == 'e' || alp == 'q')
		{
			alp++;
		}
		else 
		{
			putchar(alp);
			alp++;
		}
		
	}
	putchar('\n');
	return (0);
}
