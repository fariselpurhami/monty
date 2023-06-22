#include "monty.h"

/* prototype */

void sub(stack_t **stack, unsigned int lineCount);

/**
* sub - LET'S WRITE A FUNCTION THAT SUBS FROM FIRST 2 ELEMT.
* @stack:IT'S A POINTERS OF STRING THAT DOUBLED LINKED LIST.
* @lineCount: IT'S A POINTER OF STRING THAT HAVE LINE ERROR.
* Return: ITS WILL RETURNS ANY DATAS TYPES OF THE FUNCTIONS.
*/
void sub(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp = NULL;
	int sub = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		freeAll(stack);
		fprintf(stderr, "L%d: can't sub, stack too short\n", lineCount);

		exit(EXIT_FAILURE);
	}

	temp = *stack;
	sub = temp->next->n - temp->n;

	pop(stack, lineCount);
	(*stack)->n = sub;
}
