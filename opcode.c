#include "monty.h"

/* prototype */

void opcode(stack_t **stack, char *string, unsigned int lineCount);

/**
* opcode - LETS WRITE A FUNCTION THAT CHECK STRING IN CODE.
* @stack: IT'S A POINTERS OF STRINGS THAT USED FOR PASSING.
* @string: IT'S A POINTERS OF STRINGS THAT ARGS OR OPCODES.
* @lineCount: IT'S A POINTERS THAT HAVE A LINES FOR ERRORS.
* Return: IT WILL BE RETURNED NOTHING THATS WILL BE VOIDED.
*/
void opcode(stack_t **stack, char *string, unsigned int lineCount)
{
	int i = 0;

	instruction_t op[] = {

		{"push", push}, {"pall", pall},	{"pint", pint}, {"pop", pop},
		{"swap", swap}, {"add", add},   {"nop", nop},   {"sub", sub},
		{"div", _div},  {"mul", _mul},	{"mod", _mod},  {"pchar", pchar},
		{"pstr", pstr}, {"rotr", rotr},	{"rotl", rotl}, {NULL, NULL}

	};

	if (!strcmp(string, "stack"))
	{
		world.dataType = 1;
		return;
	}

	if (!strcmp(string, "queue"))
	{
		world.dataType = 0;
		return;
	}

	if (*string == '#')
	{
		return;
	}

	while (op[i].opcode)
	{
		if (strcmp(op[i].opcode, string) == 0)
		{
			op[i].f(stack, lineCount);
			return;
		}

		i++;
	}

	badOpCode(stack, string, lineCount);
}
