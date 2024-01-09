#include "monty.h"
/**
 * _add - adds the top two elements of the stack.
 * @stack: stack head
 * @line_number: line number
 * Return: void
*/
void _add(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		error(8, line_number, "add");
	}
	sum = (*stack)->n + (*stack)->next->n;
	(*stack)->next->n = sum;
	(*stack) = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
