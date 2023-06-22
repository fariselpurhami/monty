#include "monty.h"

/* prototype */

void lineUp(stack_t **stack, stack_t *temp);

/**
* lineUp - LET'S WRITE A FUNCTION THAT STACKS TEMP QUEUE,
* @stack: IT'S A POINTERS OF STRINGS THAT DOUBLED LINKED.
* @temp: IT'S A POINTERS OF THE NODES THAT WILL BE ADDED.
* Return: IT WILL BEEN RETURNED NONE THAT WILL BEEN VOID.
*/
void lineUp(stack_t **stack, stack_t *temp)
{
	stack_t *headTemp;

	temp->n = atoi(world.argument);

	temp->next = NULL;

	if (!*stack)
	{
		temp->prev = NULL;
		*stack = temp;
	}
	else
	{
		headTemp = *stack;

		while (headTemp->next)
		{
			headTemp = headTemp->next;
		}

		headTemp->next = temp;
		temp->prev = headTemp;
	}
}
