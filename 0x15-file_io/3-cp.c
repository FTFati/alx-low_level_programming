#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

#define USAGE "Usage: cp file_from file_to \n"
#define ERR_NOREAD "Error: Can't read from file %s \n"
#define ERR_NOWRITE "Error: Can't write to %s \n"
#define ERR_NOCLOSE "Error: Can't close fd %d \n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program that copies the content of a file to another file
 * @argc: arg count
 * @argv: arg vector
 * Return: 1 or 0
 */
int main(int argc, char **argv)
{
	int from_1 = 0;
	int To_2 = 0;
	ssize_t length;
	char buff[READ_BUFF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_1 = open(argv[1], O_RDONLY);
	if (from_1 == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
	To_2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (To_2 == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	while ((length = read(from_1, buff, READ_BUFF_SIZE)) > 0)
		if (write(To_2, buff, length) != length)
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	if (length == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
	from_1 = close(from_1);
	To_2 = close(To_2);
	if (from_1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_1), exit(100);
	if (To_2)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_1), exit(100);
	return (EXIT_SUCCESS);
}
