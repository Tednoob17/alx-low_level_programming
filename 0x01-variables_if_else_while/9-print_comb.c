#include <stdio.h>

/*main return 0 (success)*/
/**
 * main - Print the alphabet
 *
 * Return:  0 on success.
 */
int main(void)
{
int alp = 48;
	while (alp <= 57)
	{
		putchar (alp);
			if (alp == 57)
			{
				break;
			}
		putchar (44);
		putchar (' ');
		alp++;
	}
	putchar ('\n');
	return (0);
}
