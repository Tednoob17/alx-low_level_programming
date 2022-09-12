#include <stdio.h>

/*main return 0 (success)*/
/**
 * main - Print the single number
 *
 * Return:  0 on success. Error code otherwise
 */
int main(void)
{
int alp = 48;

	while (alp <= 57)
	{
		putchar (alp);
		alp++;
	}
	putchar ('\n');
	return (0);
}
