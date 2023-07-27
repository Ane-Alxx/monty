#include "monty.h"

/**
*fun_pchar - function for fun pchar
*@stack: listsatck
*@line_number: lineno
*/

void fun_pchar(stack_t **stack, unsigned int line_number)
{
	if (stack == '\0' || stack[0] == '\0')
	{
		fprintf(stderr, "L%i: can't pchar, stack empty\n", line_number);
		fun_release(NULL, NULL, 'r');
		fun_free_dlistint(*stack);
		free(world_var.line);
		exit(EXIT_FAILURE);
	}
	if (stack[0]->n < 32 || stack[0]->n > 126)
	{
		fprintf(stderr, "L%i: can't pchar, value out of range\n", line_number);
		fun_release(NULL, NULL, 'r');
		fun_free_dlistint(*stack);
		free(world_var.line);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", stack[0]->n);
}
