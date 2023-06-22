#include "monty.h"
#include <stdio.h> /* for getline */

/* prototype */

int main(int argc, char **argv);

/**
* main - LET'S WRITES A FUNCTIONS THATS ENTRIES A MAINS POINTERS.
* @argc: IT'S A POINTERS OF THE STRINGS THAT HAD NUMBERS OF ARGS.
* @argv: IT'S A POINTERS OF THE STRINGS THAT ARGUEMNTS A STRINGS.
* Return: IT WILL BE RETURNED ON SUCCESS OR ERROR ON FAILURE COD.
* Description: IT'S A DESCRIPTION THAT USED FOR PRACTICING S & Q.
*/
int main(int argc, char **argv)
{
	unsigned int lineCount = 1;
	size_t bufLen = 0;

	char *string = NULL;
	char *buffer = NULL;

	stack_t *stack = NULL;
	FILE *file;

	if (argc != 2)
	{
		usageError();
	}

	file = fopen(argv[1], "r");

	if (!file)
	{
		fileReadError(argv[1]);
	}

	world.dataType = 1;

	while (getline(&buffer, &bufLen, file) != -1)
	{

		if (*buffer == '\n')
		{
			lineCount++;
			continue;
		}

		string = strtok(buffer, " \t\n");

		if (!string)
		{
			lineCount++;
			continue;
		}

		world.argument = strtok(NULL, " \t\n");
		opcode(&stack, string, lineCount);
		lineCount++;
	}

	freeAll(&stack);
	free(buffer);

	fclose(file);
	exit(EXIT_SUCCESS);
}
