#include "monty.h"

char **op_toks = NULL;

/**
 * main - the main function for Monty Interpreter
 *
 * @argc: the count of arguments passed to the program
 * @argv: pointer to an array of char pointers to arguments
 * passed to the program
 *
 * Return: 0 on success 1 on error (exit status)
 */
int main(int argc, char **argv)
{
	int exit_status = EXIT_SUCCESS;
	FILE *script_fd = NULL;

	if (argc != 2)
		return (usageError());
	script_fd = fopen(argv[1], "r");
	if (script_fd == NULL)
		return (fileOpenError(argv[1]));
	exit_status = runMonty(script_fd);
	fclose(script_fd);
	return (exit_status);
}
