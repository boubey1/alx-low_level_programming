#include "main.h"


/**
 * read_textfile - a function that reads a text file and
 *            prints it to the POSIX standard output
 * @filename: pointer to the file
 * @letters: numbers of letters
 *
 * Return: 0 if NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t o_file, r_file, w_file;

	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL || filename == NULL)
		return (0);

	o_file = open(filename, O_RDONLY);
	r_file = read(o_file, ptr, letters);
	w_file = write(STDOUT_FILENO, ptr, r_file);

	if (o_file == -1 || r_file == -1 || w_file == -1 || w_file != r_file)
	{
		free(ptr);
		return (0);
	}

	free(ptr);
	close(o_file);

	return (w_file);
}
