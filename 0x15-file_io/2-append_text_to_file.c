#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: A pointer.
 * @text_content: The string
 *
 * Return: If faillure || filename is NULL -1
 *         Otherwise 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o_file, w_file, size = 0;

	if (text_content != NULL)
	{
		while (text_content[size])
		{
			size++;
		}
	}

	o_file = open(filename, O_WRONLY | O_APPEND);
	w_file = write(o_file, text_content, size);

	if (filename == NULL || o_file == -1 || w_file == -1)
	{
		return (-1);
	}

	close(o_file);

	return (1);
}
