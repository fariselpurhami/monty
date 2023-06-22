#include "monty.h"

/* prototype */

void pint(stack_t **stack, unsigned int lineCount);

/**
* pint - LET'S WRITE A FUNCTION THAT PEEK COD.
* @stack: IT'S A POINTERS OF STRINGS WITH S&W.
* @lineCount: IT'S A POINTERS OF STRING ERROS.
* Return: IT WILL BE RETURNED NOTHING BE VOID.
*/
void pint(stack_t **stack, unsigned int lineCount)
{
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", lineCount);

		exit(EXIT_FAILURE);
	}

	fprintf(stdout, "%d\n", (*stack)->n);
}
