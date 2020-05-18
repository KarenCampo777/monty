#include "monty.h"
/**
 * exit_failure - validates program
 * @stack: pile to be freed
 * @message: output
 * Always 0 on success
 */

void exit_failure(stack_t **stack, const char *message)
{
	fprintf(stderr, message, m_var.line);
	free_all(stack);
	exit(EXIT_FAILURE);
}

