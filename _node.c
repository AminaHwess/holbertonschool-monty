#include "monty.h"
/**
 *  create_node - creates and initializes a new node for a doubly-linked stack.
 * @n: integer
 * Return: node
*/
stack_t *create_node(int n)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
		error(4);
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	return (node);
}
