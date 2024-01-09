#include "monty.h"

/**
 * _pop - removes the top element of the stack
 * @stack: stack head
 * @line_number: line number
 * Return: void
*/

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	if (*stack == NULL)
	{
		more_error(7, line_number);
	}
	node = *stack;
	node = node->next;
	free(*stack);
	*stack = node;
}
