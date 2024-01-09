#include "monty.h"

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
