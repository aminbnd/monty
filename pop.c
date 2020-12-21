#include "monty.h"

/**
* pop - cut the head of the stack
* @stack: the stack
* @ln: line number
**/
void pop(stack_t **stack, unsigned int ln)
{
	stack_t *temp, *temp2;
	int number;

	(void)stack;
	(void)number;
	(void)ln;

	temp = *stack;
	if (temp != NULL)
	{
		temp2 = (*temp).next;
		if (temp2 != NULL)
			(*temp2).prev = NULL;
		free(temp);
		temp = temp2;
		*stack = temp;
	}
	else
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", ln);
		free_pizza(1);
	}
}

/**
* pop2 - cut the tail of the stack
**/
void pop2(void)
{
	stack_t *head = m.stack;

	while ((*head).next != NULL)
	{
		head = (*head).next;
	}
	(*(*head).prev).next = NULL;
	(*head).prev = NULL;
	free(head);
}
