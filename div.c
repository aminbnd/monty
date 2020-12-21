#include "monty.h"

/**
* divo - divide top two elements and pop
* @stack: the stack
* @ln: line number
**/
void divo(stack_t **stack, unsigned int ln)
{
	stack_t *h = *stack;
	int temp;
	(void)stack;
	(void)ln;

	if ((s_len(h)) >= 2)
	{
		temp = (*h).n;
		if (temp == 0)
		{
			fprintf(stderr, "L%u: division by zero\n", ln);
			free_pizza(1);
		}
		else
		{
			(*(*h).next).n = (*(*h).next).n / temp;
			pop(stack, ln);
		}
	}
	else
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", ln);
		free_pizza(1);
	}
}
