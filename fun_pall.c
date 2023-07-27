#include "monty.h"

/**
*fun_pall - function for fun pall
*@stack: stacllist
*@last_line: linno
*/
void fun_pall(stack_t **stack,  __attribute__((unused))unsigned int last_line)
{
	stack_t *display;

	display = *stack;
	if (display == '\0')
		return;
	while (display != '\0')
	{
		printf("%i\n", display->n);
		display = display->next;
	}
}
