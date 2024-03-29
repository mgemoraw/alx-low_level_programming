#include "main.h"
/**
* append_text_to_file - appends text to existing file
* @filename: file name
* @text_content: text content to be appended
* Return: returns appended text length
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0, fout, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			len++;

		fout = write(file, text_content, len);

		if (fout == -1)
			return (-1);
	}
	close(file);
	return (1);
}
