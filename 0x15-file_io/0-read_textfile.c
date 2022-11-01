#include "main.h"
/**
*read_textfile - read a text file and and print letters
*@filename: It's a name file that we use
*@letters:  It's a numbres of char when we can display
*
*Return: Number of char printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t inp, out;
	char *buf;

	if (fp == -1)
		return (0);

	else if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);

	buf = malloc(sizeof(char) * (letters));

	if (!buf)
		return (0);

	inp = read(fp, buf, letters);
	out = write(STDOUT_FILENO, buf, inp);

	close(fp);

	free(buf);

	return (out);
}
