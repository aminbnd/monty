#include "monty.h"

/**
* serror - print custom errors
**/
void serror(void)
{
	fprintf(stderr, "L%u: usage: %s integer\n", m.ln, m.inst);
	free_pizza(1);
}
