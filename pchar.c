#include "monty.h"

/* prototype */

void pchar(stack_t **stack, unsigned int lineCount);

/**
* pchar - LET'S WRITE A FUCNTION THAT PRINTS THE TOPS INT IN STACKING.
* @stack: IT'S A POINTERS THAT COME UP WITH MORE STACK PUNS AND WACKS.
* @lineCount: IT'S A POINTERS OF STRINGS THAT HAVE A LINES FOR ERRORS.
* Return:IT WILL BEEN RETURNED NONE THAT WILL BEEN VOID.
*/
void pchar(stack_t **stack, unsigned int lineCount)
{
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", lineCount);

		exit(EXIT_FAILURE);
	}

	if (isascii((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", lineCount);

		freeAll(stack);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", (*stack)->n);
}
