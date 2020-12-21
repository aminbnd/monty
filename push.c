#include "monty.h"

/**
* spush - push selector
* @stack: the stack
* @ln: line number
**/
void spush(stack_t **stack, unsigned int ln)
{
	if (m.mode == 0)
	{
		push(stack, ln);
	}
	else
	{
		push2(satoi(m.data));
	}
}

/**
* push - push data
* @stack: the stack
* @ln: line number
**/
void push(stack_t **stack, unsigned int ln)
{
	int n;
	stack_t *newnode = NULL;

	(void)ln;
	(void)stack;

	if (m.data == NULL)
	{
		serror();
	}
	n = satoi(m.data);
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		free_pizza(1);
	}

	(*newnode).n = n;
	(*newnode).prev = NULL;
	(*newnode).next = *stack;
	if (*stack != NULL)
	{
		(**stack).prev = newnode;
	}
	*stack = newnode;
}

/**
* push2 - push data end
* @num: data to be added
**/
void push2(int num)
{
	stack_t *head = m.stack;
	stack_t *newnode = NULL;
	stack_t *lastnode = head;

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		free_pizza(1);
	}
	(*newnode).n = num;
	(*newnode).next = NULL;
	if (head == NULL)
	{
		(*newnode).prev = NULL;
		head = newnode;
	}
	else
	{
		while ((*lastnode).next != NULL)
		{
			lastnode = (*lastnode).next;
		}
		(*lastnode).next = newnode;
		(*newnode).prev = lastnode;
	}
}

/**
* push3 - push data head
* @num: data to be added
**/
void push3(int num)
{
	stack_t *newnode = NULL;

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		free_pizza(1);
	}

	(*newnode).n = num;
	(*newnode).prev = NULL;
	(*newnode).next = m.stack;
	if (m.stack != NULL)
	{
		(*m.stack).prev = newnode;
	}
	m.stack = newnode;
}
