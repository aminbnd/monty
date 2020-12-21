#include "monty.h"

/**
* swap - swap top two elements
* @stack: the stack
* @ln: line number
**/
void swap(stack_t **stack, unsigned int ln)
{
	stack_t *h = *stack;
	int temp;
	(void)stack;
	(void)ln;

	if ((s_len(h)) >= 2)
	{
		temp = (*h).n;
		(*h).n = (*(*h).next).n;
		(*(*h).next).n = temp;
	}
	else
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}
}
