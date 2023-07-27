#include "monty.h"

/**
*fun_empty - well we dealing with empty
*@string: the str in code
*Return: 1 on success, -1 on fail
*/

int fun_empty(char **string)
{
	int p = 0;

	while (string[0][p] != '\0')
	{
		if (string[0][p] != ' ')
			return (-1);
		p++;
	}
	return (1);
}
