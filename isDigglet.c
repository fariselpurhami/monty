#include "monty.h"

/* prototype */

int isDigglet(char *string);

/**
* isDigglet - LET'S WRITE A FUNCTION THAT CHECKS IT IS A DIGIT.
* @string: IT'S A POINTERS OF STRINGS THAT CHECKS IF ITS DIGIT.
* Return: IT WILL BE RETURNED 0, IT IS NOT DIGIT, ELSE RETURN 1.
*/
int isDigglet(char *string)
{
	if (!string || *string == '\0')
	{
		return (0);
	}

	if (*string == '-')
	{
		string++;
	}

	while (*string)
	{
		if (isdigit(*string) == 0)
		{
			return (0);
		}

		string++;
	}

	return (1);
}
