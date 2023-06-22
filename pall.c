#include "monty.h"

/* prototype */

void pall(stack_t **stack, unsigned int lineCount);

/**
* pall - LET'S WRITE A FUCNTION THAT PRINTS ALL PALLS CODES.
* @stack:IT'S A POINTERS THAT COME UP WITH MORE STACK&`ACKS.
* @lineCount: IT'S A POINTER OF STR HAVE A LINES FOR ERRORS.
* Return - IT WILL BE RETURNED NOTHING BE VOIDED.
*/
void pall(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp;
	(void) lineCount;

	temp = *stack;
	while (temp)
	{
		fprintf(stdout, "%d\n", temp->n);
		temp = temp->next;
	}
}
