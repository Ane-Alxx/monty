#include "monty.h"

/**
* pstr - function for fun pstr
* @stack: liststack
* @line_number: lineno
*/

void pstr(stack_t **stack,  __attribute__((unused))unsigned int line_number)
{
	stack_t *cont = *stack;

	while (cont)
	{
		if (cont->n > 32 && cont->n < 127)
			printf("%c", (int)cont->n);
		else
			break;
		cont = cont->next;
	}
	printf("\n");
}
