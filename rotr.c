#include "monty.h"

/* prototype */

void rotr(stack_t **stack, unsigned int lineCount);

/**
* rotr - LET'S WRITE A FUNCTION THAT ROT TOP OF STACK TO BOTTOM.
* @stack: IT'S A POINTERS OF STRINGS THAT DOUBLED IN THE LINKED.
* @lineCount: IT'S A POINTERS OF STRINGS THAT HAVE LINES ERRORS.
* Return: IT WILL BEEN RETURNED NONE THAT WILL BEEN VOID.
*/
void rotr(stack_t **stack, unsigned int lineCount)
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

	*stack = right;

	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
