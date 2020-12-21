#include "monty.h"

/**
* main - Todavia no se que hace este codigo
* @argc: number of arguments
* @argv: arguments
* Return: 0 succes
**/
int main(int argc, char **argv)
{
	size_t len = 0;
	int x;

	bring_pizza();
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	m.fp = fopen(argv[1], "r");
	if (m.fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((x = getline(&m.line, &len, m.fp)) != -1)
	{
		m.line[x - 1] = '\0';
		m.ln++;
		m.inst = strtok(m.line, " ");
		m.data = strtok(NULL, " ");
		if (m.inst != NULL)
		{
			if (m.inst[0] != '#')
			{
				if (strcmp(m.inst, "nop") != 0)
				{
					if (get_instruction() != 0)
					{
						fprintf(stderr, "L%u: unknown instruction %s\n", m.ln, m.inst);
						free_pizza(1);
					}
				}
			}
		}
	}
	free_pizza(0);
	return (EXIT_SUCCESS);
}
