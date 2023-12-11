#include "main.h"
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int grd;
	ssize_t mrd, mwr;
	char *buf;

	if (!filename)
		return (0);

	grd = open(filename, O_RDONLY);

	if (grd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	mrd = read(grd, buf, letters);
	mwr = write(STDOUT_FILENO, buf, mrd);

	close(grd);
	free(buf);

	return (mwr);
}
