#ifndef MONTY
#define MONTY

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */


typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;



/**
 * struct pizza_s - pizza
 * @ln: lenght of line
 * @stack: the stack
 * @inst: opcode
 * @data: data
 * @fp: file to be opened
 * @line: line to be read
 * @mode: mode selector (stack or queue)
 */



typedef struct pizza_s
{
	FILE *fp;
	char *line;
	unsigned int ln;
	stack_t *stack;
	char *inst, *data;
	int mode;
} pizza_t;

extern pizza_t m;
pizza_t m;

int get_instruction(void);

void push(stack_t **stack, unsigned int ln);
void spush(stack_t **stack, unsigned int ln);
void push2(int num);
void push3(int num);
void pop(stack_t **stack, unsigned int ln);
void pop2(void);
void pall(stack_t **stack, unsigned int ln);
void pint(stack_t **stack, unsigned int ln);
void swap(stack_t **stack, unsigned int ln);
void add(stack_t **stack, unsigned int ln);
void sub(stack_t **stack, unsigned int ln);
void mul(stack_t **stack, unsigned int ln);
void divo(stack_t **stack, unsigned int ln);
void mod(stack_t **stack, unsigned int ln);
void pchar(stack_t **stack, unsigned int ln);
void pstr(stack_t **stack, unsigned int ln);
void rotl(stack_t **stack, unsigned int ln);
void rotr(stack_t **stack, unsigned int ln);
void queue(stack_t **stack, unsigned int ln);
void stack(stack_t **stack, unsigned int ln);

void bring_pizza(void);
void free_pizza(int status);
int s_len(stack_t *head);
int satoi(char *data);
void free_stack(void);
void serror(void);
#endif
