#include "monty.h"

/* prototype */

void swap(stack_t **stack, unsigned int lineCount);

/**
* swap - LET'S WRITE A FUCNTION THAT SWAPS THE TWO ELEMENTS IN STACKS.
* @stack: IT'S A POINTERS THAT COME UP WITH MORE STACK PUNS AND WACKS.
* @lineCount: IT'S A POINTERS OF STRINGS THAT HAVE A LINES FOR ERRORS.
*/
void swap(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp = NULL;
	int tempN = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		freeAll(stack);
		fprintf(stderr, "L%d: can't swap, stack too short\n", lineCount);

		exit(EXIT_FAILURE);
	}

	temp = *stack;
	tempN = temp->n;

	temp->n = tempN;

	temp->n = temp->next->n;
	temp->next->n = tempN;
}
