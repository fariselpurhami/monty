#include "monty.h"

/* prototype */

void add(stack_t **stack, unsigned int lineCount);

/**
* add - LET'S WRITES A FUNCTIONS THAT COMBINES THE FIRST TWO ELEMENTS.
* @stack: IT'S A POINTERS THAT COME UP WITH MORE STACK PUNS AND WACKS.
* @lineCount: IT'S A POINTERS OF STRINGS THAT HAVE A LINES FOR ERRORS.
* Return: IT WILL RETURN ANY DATA TYPES OF THE FUNCTIONS THAT RETURNS.
*/
void add(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp = NULL;

	int sum = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		freeAll(stack);
		fprintf(stderr, "L%d: can't add, stack too short\n", lineCount);

		exit(EXIT_FAILURE);
	}

	temp = *stack;
	sum = temp->n + temp->next->n;

	pop(stack, lineCount);
	(*stack)->n = sum;
}
