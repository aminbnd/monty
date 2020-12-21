#include "monty.h"

/**
* sub - substract top two elements and pop
* @stack: the stack
* @ln: line number
**/
void sub(stack_t **stack, unsigned int ln)
{
	stack_t *h = *stack;
	int temp;
	(void)stack;
	(void)ln;

	if ((s_len(h)) >= 2)
	{
		temp = (*h).n;
		(*(*h).next).n -= temp;
		pop(stack, ln);
	}
	else
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", ln);
		free_pizza(1);
	}
}
