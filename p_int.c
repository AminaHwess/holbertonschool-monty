#include "monty.h"

/**
 * _pint - prints the top
 * @stack: stack head
 * @line_number: line number
 * Return: void
*/

void _pint(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		error(6, line_number);
	}
	printf("%d\n", (*stack)->n);
}
