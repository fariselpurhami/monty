#include "monty.h"

/* prototype */

void freeAll(stack_t **h);

/**
* freeAll - LET'S WRITE A FUNCTION THAT FRESS.
* @h: IT'S A POINTERS OF THE NODE THAT PASSED.
* Return: IT WILL BE RETURNED NOTHING BE VOID.
*/
void freeAll(stack_t **h)
{
	stack_t *temp;

	if (!h)
	{
		return;
	}

	while (*h) /* free so much head. soooo goood */
	{

		temp = (*h)->next;
		free(*h);
		*h = temp;
	}
}
