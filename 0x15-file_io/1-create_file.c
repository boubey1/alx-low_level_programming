#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: pointer to the file to create
 * @text_content: pointer to a string
 *
 * Return: If faillure -1
 *           if not  1
 */
int create_file(const char *filename, char *text_content)
{
	int o_file, w_file, size = 0;

	if (text_content != NULL)
	{
		while (text_content[size])
		{
			size++;
		}
	}

	o_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_file = write(o_file, text_content, size);

	if (filename == NULL || o_file == -1 || w_file == -1)
	{
		return (-1);
	}

	close(o_file);

	return (1);
}
