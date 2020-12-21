#include "monty.h"

/**
* rotl - rotates the stack to the top
* @stack: the stack
* @ln: line number
**/
void rotl(stack_t **stack, unsigned int ln)
{
	int number;
/*	stack_t *tail = *stack;*/
	stack_t *head = *stack;

/*	size_t count = 0;*/
	(void)stack;
	(void)number;
	(void)ln;
	if (head == NULL || s_len(head) == 1)
		return;

	number = (*head).n;
	pop(stack, ln);
	push2(number);
}

/**
* rotr - rotates the stack to the top
* @stack: the stack
* @ln: line number
**/
void rotr(stack_t **stack, unsigned int ln)
{
	int number;
	stack_t *head = *stack;
	stack_t *tail = *stack;

/*	size_t count = 0;*/
	(void)stack;
	(void)number;
	(void)ln;
	if (head == NULL || s_len(head) == 1)
		return;

	while ((*tail).next != NULL)
	{
		tail = (*tail).next;
	}
	number = (*tail).n;
	pop2();
	push3(number);
}
