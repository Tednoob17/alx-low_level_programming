#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*main return 0 (success)*/
/**
 * main - Print if n number is positive or negative or zero
 *
 * Return:  0 on success. Error code otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}
	return (0);
}