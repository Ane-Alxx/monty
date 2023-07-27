#include "monty.h"

/**
*fun_push - function for fun push
*@stack: liststack
*@last_line: lineno
*/

void fun_push(stack_t **stack, __attribute__((unused))unsigned int last_line)
{
	stack_t *nouv, *cont;

	if (world_var.line[1] == NULL || fun_check_num(global.line[1]) == -1)
	{
		fprintf(stderr, "L%i: usage: push num\n", last_line);
		fun_release(NULL, NULL, 'r');
		fun_free_dlistint(*stack);
		free(world_var.line);
		exit(EXIT_FAILURE);
	}
	cont = *stack;
	nouv = malloc(sizeof(stack_t));
	if (nouv == '\0')
	{
		fprintf(stderr, "Error: malloc failed\n");
		fun_release(NULL, NULL, 'r');
		fun_free_dlistint(*stack);
		free(world_var.line);
		exit(EXIT_FAILURE);
	}
	nouv->next = '\0';
	nouv->n = atoi(world_var.line[1]);
	nouv->prev = '\0';
	*stack = nouv;
	nouv->next = cont;
	if (cont != '\0')
		cont->prev = nouv;
}
