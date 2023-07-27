#include "monty.h"

/**
*fun_free_dlistint - function for
*@head:well the lsit
*/

void fun_free_dlistint(stack_t *head)
{
	stack_t *cont;

	if (head != '\0')
		while (head != '\0')
		{
			cont = head;
			head = head->next;
			free(cont);
		}
}
