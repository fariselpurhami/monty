#include "monty.h"

/* prototype */

void pstr(stack_t **stack, unsigned int lineCount);

/**
* pstr - LET'S WRITE A FUNCTIONS THAT PRINTS STACKS ASCII.
* @stack:  IT'S A POINTERS OF STRINGS THAT DOUBLED LINKED.
* @lineCount:  IT'S A POINTERS OF STRING THAT HAVE ERRORS.
* Return: IT WILL BEEN RETURNED NONE THATS WILL BEEN VOID.
*/
void pstr(stack_t **stack, unsigned int lineCount)
{
	stack_t *temp;

	(void) lineCount;

	temp = *stack;

	while (temp)
	{
		if (temp->n > 0 && isascii(temp->n))
		{
			printf("%c", temp->n);
		}
		else
		{
			break;
		}

		temp = temp->next;
	}

	printf("\n");
}
