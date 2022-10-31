#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
*read_textfile
*
*
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
 FILE *fp;	
int i = 0;
int c;
	fp = fopen("filename","r");
	if (fp == NULL || filename == NULL){
		return (0);	
}

		while (c =getc(fp) != EOF)
		{
			for (i = 0; i < letters; i++)
			{
				putchar(c);
			}	
			fclose(fp);
		}
	return (0);
}
