#include "monty.h"
/**
 * s_len - Entry point
* @head: head of the list
* Return: the number of elements in a stackt
**/
int s_len(stack_t *head)
{
	stack_t *h = head;
	int count = 0;

	while (h != NULL)
	{
		h = (*h).next;
		count++;
	}
	return (count);
}
