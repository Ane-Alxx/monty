#include "monty.h"

/**
*fun_check_num - tryna find out if our sting got digs
*@number: our string
*Return: 1 on sucess, -1 on fail
*/

int fun_check_num(char *number)
{
	int k = 0;

	if (number[0] == '-')
		k++;
	while (number[k] != '\0')
	{
		if (number[k] < 48 || number[k] > 57)
			return (-1);
		k++;
	}
	return (1);
}
