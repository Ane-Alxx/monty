#include "monty.h"

/**
*fun_format_line - function for formatting lines
*@input: finally some monty
*Return: formatted stuff on success
*/

char **fun_format_line(char *input)
{
	char **tnz = NULL;
	char *tn = NULL;
	size_t p = 0;

	if (input == '\0')
		return ('\0');
	if (input[0] == '\0' || input[1] == '\0')
		return ('\0');
	fun_del_nwline(&input);
	if (fun_empty(&input) == 1)
		return ('\0');
	tnz = malloc(sizeof(char **) * 3);
	if (tnz == NULL)
	{
		fprintf(stderr, "Error: malloc fail");
		fun_release(NULL, NULL, 'r');
		free(tnz);
		exit(EXIT_FAILURE);
	}
	tnz[0] = NULL, tnz[1] = NULL, tnz[2] = NULL;
	tn = strtok(input, " ");
	while (tnz != NULL && p <= 1)
	{
		tnz[p] = tn;
		tn = strtok(NULL, " ");
		if (p >= 1)
			break;
		p++;
	}
	tnz[p + 1] = NULL;
	return (tnz);
}
