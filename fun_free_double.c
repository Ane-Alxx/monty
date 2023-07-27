#include "monty.h"

/**
*fun_free_double - well clear up some space
*@bubble: just a regular string
*/

void fun_free_double(char **bubble)
{
	size_t p = 0;

	if (bubble != '\0')
	{
		while (bubble[p])
		{
			free(bubble[p]);
			p++;
		}
	}
	free(bubble);
}
