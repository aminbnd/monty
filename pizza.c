#include "monty.h"

/**
 * bring_pizza - initialize pizza struct
 **/
void bring_pizza(void)
{
	m.fp = NULL;
	m.line = NULL;
	m.ln = 0;
	m.stack = NULL;
	m.inst = NULL;
	m.data = NULL;
	m.mode = 0;
}

/**
 * free_pizza - frees the struct
 * @status: 0 success 1 error
 */
void free_pizza(int status)
{
	fclose(m.fp);
	if (m.line)
		free(m.line);
	free_stack();
	if (status == 0)
		exit(EXIT_SUCCESS);
	exit(EXIT_FAILURE);
}

/**
* free_stack - frees a list
**/
void free_stack(void)
{
	stack_t *head = m.stack;
	stack_t *temp;

	while (head != NULL)
	{
		temp = (*head).next;
		free(head);
		head = temp;
	}
	head = NULL;
}
