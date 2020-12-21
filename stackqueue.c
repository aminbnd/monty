#include "monty.h"

/**
* stack - set behavior
* @stack: the stack
* @ln: line number
**/
void stack(stack_t **stack, unsigned int ln)
{
	(void)stack;
	(void)ln;
	m.mode = 0;
}

/**
* queue - set behavior
* @stack: the stack
* @ln: line number
**/
void queue(stack_t **stack, unsigned int ln)
{
	(void)stack;
	(void)ln;
	m.mode = 1;
}
