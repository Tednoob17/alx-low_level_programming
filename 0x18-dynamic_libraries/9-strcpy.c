#include "main.h"
/**
 * *_strcpy - copy the string in the pointers variables
 * @dest: the variable who will receive the string
 * @src: the string
 * Return: the pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
