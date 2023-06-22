#include "monty.h"

/* prototype */

void push(stack_t **stack, unsigned int lineCount);

/**
* push - LETS WRITE A FUNCTION THAT PUSHED DATA IN STACK.
* @stack: IT'S A POINTERS OF STRINGS THAT DOUBLED LINKED.
* @lineCount: IT'S A POINTERS OF STRING THAT HAVE ERRORS.
* Return: IT WILL BEEN RETURNED NONE THAT WILL BEEN VOID.
*/
void push(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp;

	if (!stack)
	{
		exit(EXIT_FAILURE);
	}

	if ((isDigglet(world.argument)) == 0)
	{
		integerError(stack, lineCount);
	}

	temp = malloc(sizeof(stack_t));

	if (!temp)
	{
		mallocError(stack);
	}

	if (world.dataType == 1)
	{
		stackIt(stack, temp);
	}
	else
	{
		lineUp(stack, temp);
	}
}
