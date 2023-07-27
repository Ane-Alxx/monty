#include "monty.h"

/**
*fun_rotr - swap the first and last values of the stack
*@stack: stack of values
*@line_number: line of instruction
*/

void fun_rotr(stack_t **stack, unsigned int __attribute__((unused))line_number)
{
	stack_t *up = '\0', *down = '\0';

	if (stack == '\0' || *stack == '\0')
		return;
	up = *stack, down = *stack;
	while (down->next != '\0')
		down = down->next;

	up->prev = down;
	down->next = up;
	down->prev->next = '\0';
	down->prev = '\0';
	stack[0] = down;
}
