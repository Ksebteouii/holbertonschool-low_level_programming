#include "main.h"
#include <string.h>
/**
 * create_file - function that creates a file.
 * @filename: file path
 * @text_content: text content
 * Return: success (1)
*/
int create_file(const char *filename, char *text_content)
{
	size_t byte;
	int bw, file;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (text_content != NULL)
	{
		byte = strlen(text_content);
		bw = write(file, text_content, byte);
		if (bw == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
