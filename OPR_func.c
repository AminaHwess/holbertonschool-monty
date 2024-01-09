#include "monty.h"

/**
 * open_file - opens a file
 * @file_name: the file namepath
 * Return: void
 */
void open_file(char *file_name)
{
	FILE *fd = fopen(file_name, "r");

	if (file_name == NULL || fd == NULL)
	{
		error(2, file_name);
	}
	else
	{
		read_file(fd);
		fclose(fd);
	}
}

/**
 * read_file - reads a file
 * @fd: pointer to file descriptor
 * Return: void
 */

void read_file(FILE *fd)
{
	int line_number = 0;
	char *buffer = NULL;
	size_t len = 0;

	atexit(free_nodes);
	for (line_number = 1; getline(&buffer, &len, fd) != -1; line_number++)
	{
		parse_line(buffer, line_number);
	}
	free(buffer);
}

/**
 * parse_line - Separates each line into tokens to determine
 * which function to call
 * @buffer: line from the file
 * @line_number: line number
 * Return: Returns 0 if the opcode is stack. 1 if queue.
 */

void parse_line(char *buffer, int line_number)
{
	char *opcode, *value;
	const char *delim = "$\n ";

	if (buffer == NULL)
	{
		free(buffer);
		buffer = NULL;
		error(4);
	}
	opcode = strtok(buffer, delim);
	if (opcode == NULL)
		return;
	value = strtok(NULL, delim);

	find_func(opcode, value, line_number);
}
