#include "monty.h"
/**
 * rotl - Function that rotates stack to top
 * @stack: stack to be freed
 * @line_number: The line number
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *next = *stack, *top = *st1;
	(void) line_number;
	while (next)
	{
		if (top->next)
		{
			*stack = *top->next;
			top->next->prev = NULL;
			top->next = NULL;
			top->prev = top;
			break;
		}
	}
	next = next->next;
}

/**
 * rotr - Move the stack to the bottom line
 * @stack: ponter to the stack
 * @line_number: The line number
 */
void op_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;

	(void) line_number;

	if (*stack && (*stack)->next != NULL)
	{
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = *stack;
		(*stack)->prev = curr;
		curr->prev->next = NULL;
		curr->prev = NULL;
		*stack = curr;
	}
}
