#include "monty.h"

/**
 * _pall - prints the stack
 * @stack: stack head
 * @line_number: line number
 * Return: void
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *print_stack;
	(void)line_number;

	print_stack = *stack;
	if (print_stack == NULL)
		return;
	while (print_stack != NULL)
	{
		printf("%d\n", print_stack->n);
		print_stack = print_stack->next;
	}
}
