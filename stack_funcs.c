#include "monty.h"

/**
 * initStack - Initializes a stack.
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

/**
 * check_mode - Checks if a stack_t linked list is in stack or queue mode.
 * @stack: A pointer to the top (stack) or bottom (queue)
 *         of a stack_t linked list.
 *
 * Return: If the stack_t is in stack mode - STACK (0).
 *         If the stack_t is in queue mode - QUEUE (1).
 *         Otherwise - 2.
 */
int check_mode(stack_t *stack)
{
	if (stack->n == STACK)
		return (STACK);
	else if (stack->n == QUEUE)
		return (QUEUE);
	return (2);
}
