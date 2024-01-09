#include "monty.h"
/**
 * free_nodes - frees nodes in the stack.
 * Return: void.
 */
void free_nodes(void)
{
	stack_t *tmp;

	tmp = head;
	if (head == NULL)
	{
		return;
	}
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
