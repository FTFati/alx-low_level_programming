#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile -  function that reads a text file and prints it to the POSIX
 * @filename: name of the file
 * @letters: the number of letters
 * Return: the actual number of @etters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int count;
	int DATAprint;
	char *buff;

	if (filename == NULL || letters == 0)
		return (0);
	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buff);
		return (0);
	}
	count = read(file, buff, letters);
	if (count == -1)
	{
		free(buff);
		close(file);
		return (0);
	}
	DATAprint = write(STDOUT_FILENO, buff, count);
	free(buff);
	close(file);
	if (DATAprint != count)
		return (0);
	return (count);
}
