#include "monty.h"

/**
*fun_swap - function for fun swap
*@stack: liststack
*@last_line: lineno
*/

void fun_swap(stack_t **stack, unsigned int last_line)
{
	stack_t *uptop, *updown;

	if (stack[0] == '\0' || stack[0]->next == '\0')
	{
		fprintf(stderr, "L%i: fatal, stack too small\n", last_line);
		exit(EXIT_FAILURE);
	}
	uptop = stack[0];
	updown = stack[0]->next;
	if (uptop->next->next != '\0')
	{
		uptop->next = updown->next;
		updown->next->prev = uptop;
	}
	else
		uptop->next = '\0';
	uptop->prev = updown;

	updown->next = uptop;
	updown->prev = '\0';
	*stack = updown;
}
