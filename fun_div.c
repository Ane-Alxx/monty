#include "monty.h"

/**
* fun_div - function for fun_div
* @stack: where the fin div happens
* @line_number: file line count
*/

void fun_div(stack_t **stack, unsigned int line_number)
{
	stack_t *one, *two;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		fun_release(NULL, NULL, 'r');
		fun_free_dlistint(*stack);
		free(world_var.line);
		exit(EXIT_FAILURE);
	}
	one = *stack;
	two = (*stack)->next;
	if (one->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		fun_release(NULL, NULL, 'r');
		fun_free_dlistint(*stack);
		free(world_var.line);
		exit(EXIT_FAILURE);
	}
	two->n /= one->n;
	*stack = two;
	two->prev = NULL;
	free(one);
}
