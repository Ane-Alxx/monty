#include "monty.h"

/**
*fun_pop - function for fun pop
*@stack: liststack
*@last_line: lineno
*/

void fun_pop(stack_t **stack, unsigned int last_line)
{
	stack_t *cont;

	if (*stack == '\0')
	{
		fprintf(stderr, "L%i: stack is empty\n", last_line);
		fun_release(NULL, NULL, 'r');
		fun_free_dlistint(*stack);
		free(world_var.line);
		exit(EXIT_FAILURE);
	}
	cont = *stack;
	*stack = stack[0]->next;
	free(cont);
}
