#include "monty.h"

/**
*fun_pint - function for fun pint
*@stack: liststack
*@line_number: lineno
*/
void fun_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == '\0')
	{
		fprintf(stderr, "L%i: can't pint, stack empty\n", line_number);
		fun_release(NULL, NULL, 'r');
		fun_free_dlistint(*stack);
		free(world_var.line);
		exit(EXIT_FAILURE);
	}
	printf("%i\n", stack[0]->n);
}
