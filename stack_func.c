#include "monty.h"

/**
 * init_stack - Initializes a stack.
 * @stack: A pointer to an unitialized stack_t stack.
 *
 * Return: 1 on error, 0 on success.
 */
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

/**
 * free_stack - Frees a stack_t stack.
 * @stack: A pointer to the top (stack) or
 *         bottom (queue) of a stack_t.
 */
void free_stack(stack_t **stack)
{
	stack_t *tmp = *stack;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
