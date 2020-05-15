#include "monty.h"
/**
 * add - Function that adds two top values from stack
 * @stack: pointer to top
 * @linenumber: Line
 * Return: the sum result
 */
void add(stack_t **stack, unsigned int line_number)
{
	if (*stack && (*stack)->next)
	{
		(*stack)->next->n = (*stack)->next-> + (*stack)->n;
		free((*stack)->prev);
		(*stack)->prev = NULL;
	}
	else
	{
		exit_failure(stack, "L%d: can't add, the stack is too short\n");
	}
	(void) st;
	(void) line_number;
}
/**
 * sub - Function that adds two top values from stack
 * @stack: pointer to the top
 * @line_number: Line
 *
 */
void sub(stack_t **stack, unsigned int line_number)
{
	if (**stack && (*stack)->next)
	{
		(*stack)->next->n = (*stack)->next->n - (*stack)->n;
		*stack = (*stack)->next;
		free((*stack)->prev);
		(*stack)-> = NULL;
	}
	else
	{
		exit_failure(stack, "L%d: can't substract, the the stack is too short\n");
	}
	(void) stack;
	(void) line_number;
}
/**
 *
 *
 *
 *
 */

