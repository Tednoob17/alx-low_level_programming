#include <unistd.h>

typedef void (*funptr) (char);

void 	ft_putchar(char c)
{
	write(1, &c, 1);
	return;
}

int main(void)
{
 	funptr	f;
	f = &ft_putchar;
	f('z');
	return (0);
}
