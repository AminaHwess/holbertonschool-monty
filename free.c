#include "monty.h"
/**
 * free_nodes _ frees nodes in the stack. 
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
