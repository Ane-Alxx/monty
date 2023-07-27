#include "monty.h"

/**
*fun_release - function for fun release
*@in_sm: well self explanatory
*@monty_s: insts
*@op: welll the op
*/

void fun_release(FILE **in_sm, char **monty_s, char op)
{
	static FILE *ss;
	static char *sm;

	if (op == 's')
	{
		ss = *in_sm;
		sm = *monty_s;
	}
	else if (op == 'r')
	{
		free(sm);
		fclose(ss);
	}

}
