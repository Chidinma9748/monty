
I#include "monty.h"
stack_t *head = NULL;

/**
 * main -input
 * @argc: value of  arguments count
 * @argv: collection of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	open_file(argv[1]);
	free_nodes();
	return (0);
}

