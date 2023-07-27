#include "monty.h"

/**
*main - start here
*@argc: arg count
*@argv: the args
*Return: somthing on success
*/

int main(int argc, char **argv)
{
	FILE *in_sm = NULL;
	char *monty_s = NULL;
	size_t s = 0;
	unsigned int nw_ln = 0;
	stack_t *pi = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	in_sm = fopen(argv[1], "r");
	if (in_sm == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&monty_s, &s, in_sm) != EOF)
	{
		nw_ln++;
		fun_release(&in_sm, &monty_s, 's');
		if (nw_ln != '\0')
			free(world_var.line);
		world_var.line = fun_format_line(monty_s);
		if (world_var.line == NULL || (world_var.line[0][0] == '\n' ||
		world_var.line[0][0] == '#'))
			continue;
		else
			fun_get_function(&pi, nw_ln);
	}
	fun_release(NULL, NULL, 'r');
	free(world_var.line);
	fun_free_dlistint(pi);
	return (EXIT_SUCCESS);
}
