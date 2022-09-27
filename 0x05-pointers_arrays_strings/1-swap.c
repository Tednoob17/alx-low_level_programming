#include "main.h"
/**
*swap_int - change two variables in parameters
*@a: first value
*@b: secund value
*Return:   Void
*/
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
