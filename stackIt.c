#include "monty.h"

/* prototype */

void stackIt(stack_t **stack, stack_t *temp);

/**
* stackIt - LET'S WRITE A FUNCTION THAT STACKS A NEW DATA.
* @stack:  IT'S A POINTERS OF STRINGS THAT DOUBLED LINKED.
* @temp:  IT'S A POINTERS OF THE NODES THAT WILL BE ADDED.
* Return:ITS WILL BEEN RETURNED NONE THATS WILL BEEN VOID.
*/
void stackIt(stack_t **stack, stack_t *temp)
{
	temp->n = atoi(world.argument);

	if (!*stack)
	{
		temp->prev = NULL;

		temp->next = NULL;

		*stack = temp;
	}
	else
	{
		(*stack)->prev = temp;
		temp->prev = NULL;

		temp->next = *stack;
		*stack = temp;
	}
}
