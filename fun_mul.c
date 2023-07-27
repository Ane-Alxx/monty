#include "monty.h"

/**
* fun_mul - function for fun mul
* @stack: liststack
* @line_number: linessss
*/

void fun_mul(stack_t **stack, unsigned int line_number)
{
	stack_t *one, *two;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		fun_release(NULL, NULL, 'r');
		fun_free_dlistint(*stack);
		free(world_var.line);
		exit(EXIT_FAILURE);
	}
	one = *stack;
	two = (*stack)->next;
	two->n *= one;
	*stack = two;
	two->prev = NULL;
	free(one);
}
