#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>

/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
*/
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
* struct argum - used by everyone
* @line: this will point to the line
* Description: just fulfilling betty style
*/
typedef struct argum
{
	char **line;
}world_var_t;

world_var_t world_var;

void fun_add(stack_t **stack, unsigned int line_number);
void fun_nop(stack_t **stack, unsigned int line_number);
void fun_sub(stack_t **stack, unsigned int line_number);
void fun_div(stack_t **stack, unsigned int line_number);
void fun_mul(stack_t **stack, unsigned int line_number);
void fun_mod(stack_t **stack, unsigned int line_number);
int fun_check_num(char *number);
void fun_del_nwline(char **delete);
int fun_empty(char **string);
void fun_swap(stack_t **stack, unsigned int line_number);
void fun_pstr(stack_t **stack, unsigned int line_number);
void fun_pchar(stack_t **stack, unsigned int line_number);
void fun_rotl(stack_t **stack, unsigned int line_number);
void fun_pchar(stack_t **stack, unsigned int line_number);
void fun_rotr(stack_t **stack, unsigned int line_number);
char **fun_Change_line(char *input);
void fun_get_function(stack_t **fun_l, unsigned int line_number);
void fun_push(stack_t **stack, unsigned int line_number);
void fun_pall(stack_t **stack, unsigned int line_number);
void fun_pint(stack_t **stack, unsigned int line_number);
void fun_pop(stack_t **stack, unsigned int line_number);
char **fun_format_line(char *input);
void fun_free_double(char **bubble);
void fun_free_dlistint(stack_t *head);
void fun_release(FILE **in_sm, char **monty_s, char op);


#endif /* MONTY_H */
