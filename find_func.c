#include "monty.h"
/**
 * find_func - find the appropriate function for the opcode
 * @opcode: opcode
 * @value: argument of opcode
 * @ln: line number
 * Return: void
 */
void find_func(char *opcode, char *value, int ln)
{
	int i;
	int m;

	instruction_t func_list[] = {
		{"push", add_stack},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"add", _add},
		{"swap", _swap},
		{"nop", _nop},
		{"sub", _sub},
		{"mul", _mul},
		{"div", _div},
		{NULL, NULL}};

	for (m = 1, i = 0; func_list[i].opcode != NULL; i++)
	{
		if (strcmp(opcode, func_list[i].opcode) == 0)
		{
			call_fun(func_list[i].f, opcode, value, ln);
			m = 0;
		}
	}
	if (m == 1)
		error(3, ln, opcode);
}
