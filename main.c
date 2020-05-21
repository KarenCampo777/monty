#include "monty.h"
stack_h stacker = {NULL, NULL, NULL};
/**
 * main- Function that checks code
 * @argc: Number of arguments
 * @argv: Value of arguments
 * Return: Alwauys 0 on succes
 */
int main(int argc, char *argv[])
{
	FILE *file_open;
	size_t len = 0;
	unsigned int counter = 1;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file_open = fopen(argv[1], "r");

	if (file_open == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&(stacker.str), &len, file_open) != -1)
	{
		printf("string is: %s\n", stacker.str);
		the_excec(counter);
		counter++;
	}
	fclose(file_open);
	free(stacker.str);

	/**read_file(argv[2];*/
	return (EXIT_SUCCESS);
}
