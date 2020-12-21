#include "monty.h"

/**
* pstr - print the head
* @stack: teh stack
* @ln: line number
**/
void pstr(stack_t **stack, unsigned int ln)
{
	int number;
	stack_t *h = *stack;
	(void)stack;
	(void)number;
	(void)ln;

	if (h != NULL)
	{
		while (h != NULL)
		{
			if ((*h).n < 1 || (*h).n > 127)
			{
				break;
			}
			printf("%c", (*h).n);
			h = (*h).next;
		}
	}
	putchar('\n');
}
