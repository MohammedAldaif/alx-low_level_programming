#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int grd;
	int nletters;
	int twr;

	if (!filename)
		return (-1);

	grd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (grd == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (nletters = 0; text_content[nletters]; nletters++)
		;
	twr = write(grd, text_content, nletters);

	if (twr == -1)
		return (-1);

	close(grd);

	return (1);
}
