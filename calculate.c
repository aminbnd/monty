#include "monty.h"
/**
 * add - adds the top two elements of the stack.
 * @stack: pointer to the head of the list
 * representing the stack
 * @line_number: Instruction (line number)
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	/** For mandatory Task 4.add **/
	stack_t **first = stack;

	if (!stack || !(*stack) || !(stack)->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack = &(*stack)->next;
	(*stack)->n = (*stack)->n + (*stack)->prev->n;
	pop(first, line_number);
	/**
	 * pop function should be hundled before this function
	 * it is used to eliminate the last (means the top) element
	 * of the stack
	 */
}

/**
 * sub - substruts the top two elements of the stack.
 * @stack: pointer to the head of the list
 * representing the stack
 * @line_number: Instruction (line number)
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_number)
{
	/** For advanced Task 6.sub **/
	stack_t **first = stack;

	if (!stack || !(*stack) || !(stack)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack = &(*stack)->next;
	(*stack)->n = (*stack)->n - (*stack)->prev->n;
	pop(first, line_number);
	/**
	 * pop function should be hundled before this function
	 * it is used to eliminate the last (means the top) element
	 * of the stack
	 */
}

/**
 * mul -  multiplies the second top element of
 * the stack with the top element of the stack
 * @stack: Pointer to the head of the list representing
 * the stack
 * @line_number: Instruction (line number)
 * Return: void
 */
void mul(stack_t **stack, unsigned int line_number)
{
	/** For advanced Task 8.mul **/
	stack_t **first = stack;

	if (!stack || !(*stack) || !(stack)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack = &(*stack)->next;
	(*stack)->n = (*stack)->n * (*stack)->prev->n;
	pop(first, line_number);
	/**
	 * pop function should be hundled before this function
	 * it is used to eliminate the last (means the top) element
	 * of the stack
	 */
}

/**
 * div -  divides the second top element of
 * the stack by the top element of the stack.
 * @stack: Pointer to the head of the list representing
 * the stack
 * @line_number: Instruction (line number)
 * Return: void
 */
void div(stack_t **stack, unsigned int line_number)
{
	/** For advanced Task 7.div **/
	stack_t **first = stack;

	if (!stack || !(*stack) || !(stack)->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack = &(*stack)->next;
	(*stack)->n = (*stack)->n / (*stack)->prev->n;
	pop(first, line_number);
	/**
	 * pop function should be hundled before this function
	 * it is used to eliminate the last (last means the top) element
	 * of the stack
	 */
}

/**
 * mod - computes the rest of the division of the second top
 * element of the stack by the top element of the stack
 *@stack: Pointer to the head of the list representing
 * the stack
 * @line_number: Instruction (line number)
 * Return: void
 */
void mod(stack_t **stack, unsigned int line_number)
{
	/** For advanced Task 9.div **/
	stack_t **first = stack;

	if (!stack || !(*stack) || !(stack)->next)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack = &(*stack)->next;
	(*stack)->n = (*stack)->n % (*stack)->prev->n;
	pop(first, line_number);
	/**
	 * pop function should be hundled before this function
	 * it is used to eliminate the last (last means the top) element
	 * of the stack
	 */
}
