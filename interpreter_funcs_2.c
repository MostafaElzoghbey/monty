#include "monty.h"

/**
 * montyAdd - Adds the top two values of a stack_t linked list.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_number: The current working line number of a Monty bytecodes file.
 *
 * Description: The result is stored in the second value node
 *              from the top and the top value  is removed.
 */
void montyAdd(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "add"));
		return;
	}

	(*stack)->next->next->n += (*stack)->next->n;
	montyPop(stack, line_number);
}

/**
 * montyNop - Does absolutely nothing for the Monty opcode 'nop'.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_number: The current working line number of a Monty bytecodes file.
 */
void montyNop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
