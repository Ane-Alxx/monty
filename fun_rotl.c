#include "monty.h"

/**
*fun_rotl - funtion for the fun rotl
*@stack: liststack
*@line_number: lineno
*/

void fun_rotl(stack_t **stack, unsigned int __attribute__((unused))line_number)
{
	stack_t *up, *down;

	if (stack == '\0' || *stack == '\0')
		return;
	up = *stack, down = *stack;
	while (down->next != '\0')
		down = down->next;
	down->next = up;
	up->prev = down;
	up->next->prev = '\0';
	*stack = up->next;
	up->next = '\0';
}
