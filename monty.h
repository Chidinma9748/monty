#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void func push(stack_t **,unsigned int);
void func pall (stack_t **,unsigned int);
void func pint (stack_t **,unsigned int);
void func pop (stack_t **,unsigned int);
void func swap (stack_t **,unsigned int);
void func add (stack_t **,unsigned int);
void func nop (stack_t **,unsigned int);
void func sub (stack_t **,unsigned int);
void func div (stack_t **,unsigned int);
void func mul (stack_t **,unsigned int);
void func mod (stack_t **,unsigned int);
void func pchar(stack_t **,unsigned int);
void func pstr (stack_t **,unsigned int);
void func rotl (stack_t **,unsigned int);
void func rotr (stack_t **,unsigned int);
void func stack (stack_t **,unsigned int);
void func Queues (stack_t **,unsigned int);
#endif
