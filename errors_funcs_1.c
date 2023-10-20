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

/**
 * mallocError - Prints malloc error messages.
 *
 * Return: 0 always.
 */
int mallocError(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}

/**
 * unknownOpError - Prints unknown instruction error messages.
 * @opcode: Opcode where error occurred.
 * @line_number: Line number in Monty bytecodes file where error occured.
 *
 * Return: (EXIT_FAILURE) always.
 */
int unknownOpError(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",
			line_number, opcode);
	return (EXIT_FAILURE);
}

/**
 * noIntError - Prints invalid montyPush argument error messages.
 * @line_number: Line number in Monty bytecodes file where error occurred.
 *
 * Return: (EXIT_FAILURE) always.
 */
int noIntError(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
