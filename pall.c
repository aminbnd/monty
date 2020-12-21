#include "monty.h"

/**
* pall - print the stack
* @stack: the stack
* @ln: line number
**/
void pall(stack_t **stack, unsigned int ln)
{
	int number;
	stack_t *h = *stack;
	size_t count = 0;
	(void)stack;
	(void)number;
	(void)ln;

	if (!stack)
		return;
	while (h != NULL)
	{
		printf("%i\n", (*h).n);
		h = (*h).next;
		count++;
	}
}
