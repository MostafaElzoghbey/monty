#include "monty.h"


int initStack(stack_t **stack)
{
	stack_t *st;

	st = malloc(sizeof(stack_t));
	if (s == NULL)
		return (mallocError());

	st->n = STACK;
	st->prev = NULL;
	st->next = NULL;

	*stack = st;

	return (EXIT_SUCCESS);
}
