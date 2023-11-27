#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, ltcount, wrcount;

if (filename == NULL)
	return (-1);

fd = open(filename, O_WRONLY | O_APPEND);

if (fd == -1)
	return (-1);

if (text_content != NULL)
	{
		while (text_content[ltcount] != '\0')
			ltcount++;

		wrcount = write(fd, text_count, ltcount);

		if (wrcount == -1)
			return (-1);
	}
close(fd);

return (1);
}
