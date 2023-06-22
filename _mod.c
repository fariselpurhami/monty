#include "monty.h"

/* prototype */

void _mod(stack_t **stack, unsigned int lineCount);

/**
* _mod - LET'S WRITE A FUNCTION THAT SUBSTRACTS THE FIRST TWO ELEMNTS.
* @stack: IT'S A POINTERS THAT COME UP WITH MORE STACK PUNS AND WACKS.
* @lineCount: IT'S A POINTERS OF STRINGS THAT HAVE A LINES FOR ERRORS.
* Return: IT WILL RETURN ANY DATA TYPES OF THE FUNCTIONS THAT RETURNS.
*/
void _mod(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp = NULL;

	int modded = 0;

	if (!stack || !*stack || !((*stack)->next))
	{

		freeAll(stack);
		fprintf(stderr, "L%d: can't mod, stack too short\n", lineCount);

		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		freeAll(stack);
		fprintf(stderr, "L%d: division by zero\n", lineCount);

		exit(EXIT_FAILURE);
	}

	temp = *stack;
	modded = temp->next->n % temp->n;

	pop(stack, lineCount);
	(*stack)->n = modded;
}
