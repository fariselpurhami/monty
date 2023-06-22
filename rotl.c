#include "monty.h"

/* prototype */

void rotl(stack_t **stack, unsigned int lineCount);

/**
* rotl - LET'S WRITE A FUCNTION THAT ROTATED STACK AT TOPPING.
* @stack: IT'S A POINTERS OF STRINGS THAT WILL DOUBLED LINKED.
* @lineCount: IT'S A POINTERS OF THE NODES THAT WILL BE ADDED.
*/
void rotl(stack_t **stack, unsigned int lineCount)
{
	stack_t *left;

	stack_t *right;

	(void) lineCount;

	if (!stack || !*stack || !(*stack)->next)
	{
		return;
	}

	left = right = *stack;

	while (right->next)
	{
		right = right->next;
	}

	right->next = left;
	left->prev = right;

	*stack = left->next;

	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
