#include "monty.h"

/**
 * usageError - Prints usage error messages.
 *
 * Return: 1 always.
 */
int usageError(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}

/**
 * fileOpenError - Prints file opening error messages.
 * @filename: Name of file which failed to open
 *
 * Return: 1 always.
 */
int fileOpenError(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}