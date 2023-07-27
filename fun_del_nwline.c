#include "monty.h"

/**
*fun_del_nwline - delete new lines into a string
*@delete: well this the guy we working on
*/

void fun_del_nwline(char **delete)
{
	int k = 0;
	char *string = *delete;

	while (string[k] != '\0')
	{
		if (string[k] == '\n')
			string[k] = '\0';
		k++;
	}
}
