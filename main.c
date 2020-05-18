#include "monty.h"
/**
 * main- Function that checks code
 * @argc: Number of arguments
 * @argv: Value of arguments
 * Return: Alwauys 0 on succes
 */
int main(int argc, char *argv[])
{
	FILE* file_open;
	char str[60];
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
	fgets(str, 60, file_open);
	printf("string is: %s\n", str);

	fclose(file_open);

	/**read_file(argv[2];*/
	return (EXIT_SUCCESS);
}
