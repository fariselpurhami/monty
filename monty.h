#ifndef _MONTY_H_
#define _MONTY_H_

/* decleration */

#define _GNU_SOURCE

/* headers */

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <math.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <ctype.h>

/*===========================================================================*/

/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/*===========================================================================*/

/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*===========================================================================*/

/**
* struct global - the string, the arguments, the dataType, the file
* @argument: the arguments of the string
* @dataType: will be used to differentiate stacks from queues
*
* Description: global structure used to pass data around the functions easily
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct global
{
	char *argument;
	int dataType;
} pitbull;
extern pitbull world;
pitbull world;

/*===========================================================================*/
void freeAll(stack_t **h);
void add(stack_t **stack, unsigned int lineCount);
void _div(stack_t **stack, unsigned int lineCount);
void _mod(stack_t **stack, unsigned int lineCount);
/*===========================================================================*/

void opcode(stack_t **stack, char *string, unsigned int lineCount);
int isDigglet(char *string);
void lineUp(stack_t **stack, stack_t *temp);
void nop(stack_t **stack, unsigned int lineCount);
/*===========================================================================*/

void usageError(void);
void pall(stack_t **stack, unsigned int lineCount);
void pint(stack_t **stack, unsigned int lineCount);
void pop(stack_t **stack, unsigned int lineCount);
/*===========================================================================*/

void badOpCode(stack_t **stack, char *string, unsigned int lineCount);
void fileReadError(char *argv);
void mallocError(stack_t **stack);
/*===========================================================================*/

void stackIt(stack_t **stack, stack_t *temp);
void integerError(stack_t **stack, int lineCount);
void push(stack_t **stack, unsigned int lineCount);
/*===========================================================================*/

void sub(stack_t **stack, unsigned int lineCount);
void _mul(stack_t **stack, unsigned int lineCount);
void swap(stack_t **stack, unsigned int lineCount);
/*===========================================================================*/

void rotr(stack_t **stack, unsigned int lineCount);
void pchar(stack_t **stack, unsigned int lineCount);
void pstr(stack_t **stack, unsigned int lineCount);
void rotl(stack_t **stack, unsigned int lineCount);
/*===========================================================================*/

#endif /* MONTY_H */
