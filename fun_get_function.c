#include "monty.h"

/**
*fun_get_function - function for get func
*@fun_l: well the stackker
*@line_number: some inst
*/

void fun_get_function(stack_t **fun_l, unsigned int line_number)
{
	instruction_t opratns[] = {
		{"push", fun_push},
		{"pall", fun_pall},
		{"pint", fun_pint},
		{"pop", fun_pop},
		{"add", fun_add},
		{"nop", fun_nop},
		{"sub", fun_sub},
		{"div", fun_div},
		{"mul", fun_mul},
		{"mod", fun_mod},
		{"swap", fun_swap},
		{"rotl", fun_rotl},
		{"pchar", fun_pchar},
		{"pstr", fun_pstr},
		{"rotr", fun_rotr},
		{NULL, NULL}
	};

	int p;

	for (p = 0; opratns[p].opcode != NULL; p++)
	{
		if (strcmp(world_var.line[0], opratns[p].opcode) == 0)
		{
			opratns[p].f(fun_l, line_number);
			return;
		}
	}
	if (opratns[p].opcode == NULL)
	{
		fprintf(stderr, "L%u: instruction invalid %s\n", line_number,
		world_var.line[0]);
		free(world_var.line);
		fun_free_dlistint(*fun_l);
		fun_release(NULL, NULL, 'r');
		exit(EXIT_FAILURE);
	}
}
