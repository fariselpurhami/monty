#include "monty.h"

/* prototype */

void pop(stack_t **stack, unsigned int lineCount);

/**
* pop - LET'S WRITE A FUNCTION THAT POPS A LIFO AT TOPS.
* @stack:IT'S A POINTERS THAT BE COME UP STACKS & WACKS.
* @lineCount: IT'S A POINTER OF STRING THAT HAVE ERRORS.
* Return:  IT WILL BEEN RETURNED NONE THAT WILL BE VOID.
*/
void pop(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp = NULL;

	if (!stack || !*stack)
	{
		freeAll(stack);
		fprintf(stderr, "L%u: can't pop an empty stack\n", lineCount);

		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;

	free(*stack);

	*stack = temp;

	if (!*stack)
	{
		return;
	}

	(*stack)->prev = NULL;
}
