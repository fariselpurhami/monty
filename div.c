#include "monty.h"

/* prototype */

void _div(stack_t **stack, unsigned int lineCount);

/**
* _div - LET'S WRITE A FUNCTION THAT SUBSTRACT THE FIRST TWO ELEMENTS.
* @stack: IT'S A POINTERS THAT COME UP WITH MORE STACK PUNS AND WACKS.
* @lineCount: IT'S A POINTERS OF STRINGS THAT HAVE A LINES FOR ERRORS.
* Return: IT WILL RETURN ANY DATA TYPES OF THE FUNCTIONS THAT RETURNS.
*/
void _div(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp = NULL;
	int div = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		freeAll(stack);
		fprintf(stderr, "L%d: can't div, stack too short\n", lineCount);

		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		freeAll(stack);
		fprintf(stderr, "L%d: division by zero\n", lineCount);

		exit(EXIT_FAILURE);
	}

	temp = *stack;
	div = temp->next->n / temp->n;

	pop(stack, lineCount);
	(*stack)->n = div;
}
