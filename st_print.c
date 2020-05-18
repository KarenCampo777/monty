#include "monty.h"
/**
 * pall - Function that prints the stack
 * @stack: pointer to the top element on top
 * @line:number: line
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *st_pall = stack;
	while (st_pall != NULL)
	{
		printf("%d\n", st_pall->n); 
		st_pall = st_pall->next;
	}
	(void) line_number;
}
/**
 * print_top - Function that prints all the stack elements
 * @stack: pointer to the element on top
 * @line_number: line
 */
void print_top(stack_t **stack, unsigned int line_number)
{
	stack_t *st_pall = *stack;
	if (st_pall != NULL)
		printf("%d\n", st->n);
	else
	{
		exit_failure(stack, "L%d: can't add, stack too short\n"
	}
	(void) line_number;
}

/**
 * print_char - Function that prints 
 * @stack: pointer to top
 * @line_number: line
 */
void print_char(stack_t **stack, unsigned int line_number)
{
	stack_t *st_pall = *stack;
	
	if (st_pall != NULL)
	{
		if (st_pall->n >= 32 && st_pall-n <= 126)
			printf("%c\n", st_pall-n);
		else
		{
				exit_failue(stack, "L%d: can't print_char, the value is out of range\n");
		}
		st_pall = st_pall->next;
	}
	else
	{
		exit_failure(stack, "L%d: can't print_chat, the stack is empty\n");
	}
	(void) line_number;
}
