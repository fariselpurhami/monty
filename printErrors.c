#include "monty.h"

/* prototypes */

void usageError(void);
void fileReadError(char *argv);
void badOpCode(stack_t **stack, char *string, unsigned int lineCount);
void mallocError(stack_t **stack);
void integerError(stack_t **stack, int lineCount);

/**
* usageError - LET'S WRITE A FUNCTION THATS HANDLES ARGS.
* Return -  IT WILL BEEN RETURNED NONE THAT WILL BE VOID.
*/
void usageError(void)
{
	fprintf(stderr, "USAGE: monty file\n");

	exit(EXIT_FAILURE);
}

/**
* fileReadError - LET'S WRITE A FUNCTION THAT NOT OPEN, READ FILE.
* @argv:  IT'S A POINTERS OF THE STRINGS THAT ARGUEMNTS A STRINGS.
* Return - IT WILL BEEN RETURNED NONE THAT WILL BEEN VOID.
*/
void fileReadError(char *argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv);

	exit(EXIT_FAILURE);
}

/**
* badOpCode - LET'S WRITE A FUNCTION THAT OPCODE INVAILDS.
* @stack: IT'S A POINTERS OF STRINGS THAT FREES AN ERRORS.
* @string: IT'S A POINTERS OF STRINGS OF OPCODE A INVAILD.
* @lineCount: IT'S A POINTERS OF THE STRINGS IN LINE NUMB.
* Return - IT WILL BEEN RETURNED NONE THAT WILL BEEN VOID.
*/
void badOpCode(stack_t **stack, char *string, unsigned int lineCount)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", lineCount, string);
	freeAll(stack);

	exit(EXIT_FAILURE);
}

/**
* mallocError - LET'S WRITE A FUNCTION THAT HANDLES MANY ARGS.
* @stack: IT'S A POINTERS OF STRINGS THAT GONNA DEALS WITH IT.
* Return - IT WILL BEEN RETURNED NONE THAT WILL BEEN VOIDED.
*/
void mallocError(stack_t **stack)
{
	freeAll(stack);
	fprintf(stderr, "Error: malloc failed\n");

	exit(EXIT_FAILURE);
}

/**
* integerError - LET'S WRITE A FUNCTION THATS PUSED INTEGERS.
* @stack: T'S A POINTERS OF STRINGS THAT GONNA DEALS WITH IT.
* @lineCount: IT'S A POINTER OF THE STRING IN CODE DEBUGGING.
* Return: IT WILL BEEN RETURNED NONE THAT WILL BEEN VOIDED.
*/
void integerError(stack_t **stack, int lineCount)
{
	freeAll(stack);
	fprintf(stderr, "L%u: usage: push integer\n", lineCount);

	exit(EXIT_FAILURE);
}
