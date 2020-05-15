#include "monty.h"
/**
 * the_opcode - function that checks opcode to execute
 * 
 *
 * Return: 
 */

void (*the_opcode(char *opcode, stack_t**, unsigned int))
{
	instruction_t opi[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"mod",mod},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"sub", sub},
		{"mul", mul},
		{"div", div},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}};


int i = 0;
while (opi[i].f != NULL)
	{	
	if (strcmp(opcode, opi[i].opcode) == 0)
		return (opi[i].f);
	i++;
	}	
dprintf(STDERR_FILENO, "L%u: unknown instruction %s\n", opcode)
free_all();
exit(EXIT_FAILURE);

}		
