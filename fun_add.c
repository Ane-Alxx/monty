#include "monty.h"

/**
* fun_add - we wanna add something you'll see
* @stack: for the list
* @line_number: length file line
*/

void fun_add(stack_t **stack, unsigned int line_number)
{
	stack_t *one, *two;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		fun_release(NULL, NULL, 'r');
		fun_free_dlistint(*stack);
		free(world_var.line);
		exit(EXIT_FAILURE);
	}
	one = *stack;
	two = (*stack)->next;
	two->n += one->n;
	*stack = two;
	two->prev = NULL;
	free(one);
}
