#include "monty.h"
/**
 * monty_f - reads monty file  
 * @name_f: Name of the file
 * Return: Alway 0 on success
 */

int monty_f(char * name_f)
{
	int len = strlen(name_f);

	len--;
	if (len > 1)
	{
		if (name_f[len - 1] == "." && name_f[len] == "m")
			return (1);
	}
	return (0);
}
/**
 * file_fail - Function that checks if file can be opened
 * @name_f: file name
 * @stack: Pile 
 * Return: Always 0 on succes
 */
void file_fail(char *name_f, stack_t **stack)
{
	fprintf(st
