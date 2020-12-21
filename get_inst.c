#include "monty.h"

/**
* get_instruction - get the correct function
* Return: pointer to the correct function
**/
int get_instruction(void)
{
	int i;
	void (*f)();
	instruction_t op[] = {
		{"push", spush},
		{"pall", pall},
		{"pop", pop},
		{"pint", pint},
		{"swap", swap},
		{"add", add},
		{"sub", sub},
		{"mul", mul},
		{"div", divo},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{"queue", queue},
		{"stack", stack},
		{NULL, NULL}
	};
	for (i = 0; op[i].opcode; i++)
	{
		if (strcmp(m.inst, op[i].opcode) == 0)
		{
			f = op[i].f;
			f(&m.stack, m.ln);
			return (0);
		}
	}
	return (1);
}
