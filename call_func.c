#include "monty.h"
/**
 * call_fun - Calls the required function.
 * @func: Pointer to the function that is about to be called.
 * @op: string representing the opcode.
 * @val: string representing a numeric value.
 * @ln: line numeber for the instruction.
 */
void call_fun(op_func func, char *op, char *val, int ln)
{
	stack_t *node;
	int m;
	int i;

	m = 1;
	if (strcmp(op, "push") == 0)
	{
		if (val != NULL && val[0] == '-')
		{
			val = val + 1;
			m = -1;
		}
		if (val == NULL)
			error(5, ln);
		for (i = 0; val[i] != '\0'; i++)
		{
			if (isdigit(val[i]) == 0)
				error(5, ln);
		}
		node = create_node(atoi(val) * m);
		func(&node, ln);
	}
	else
		func(&head, ln);
}
