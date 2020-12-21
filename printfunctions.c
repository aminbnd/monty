#include "monty.h"
/**
 * pchar - prints the char at the top of the stack,
 * followed by a new line.
 * @stack: Pointer the head of the struct representing the stack
 * @line_number: instruction
 * Return: void
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	/** For advanced Task11.pchar **/
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit (EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L<%u>: can't pchar, value out of range\n", line_number);
		exit (EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}

/**
 * pstr - prints the string starting at the top of the stack,
 * followed by a new line.
 * @stack: pointer to the head of the struct reporesenting
 * the stack
 * @line_number: Instruction
 * Return: void
 */
void pstr(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	/** For advanced Task 12.pst **/
	stack_t *st = *stack;
	while (st && st->n > 0 && st->n < 128)
	{
		putchar(st->n);
		stack = st->next;
	}
	putchar('\n');
}
