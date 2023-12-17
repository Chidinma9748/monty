#include "monty.h"
/**
 * func add - adds the top two elements of the stack.
 * @stack: pointer to the stack
 * @line_number: line_number
 * Return: mil
*/
void func add(stack_t **stack, unsigned int line_number)
{
  
   int sum;
   if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		more_err(8, line_number, "add");

	(*stack) = (*stack)->next;
	sum = (*stack)->n + (*stack)->prev->n;
	(*stack)->n = sum;
	free((*stack)->prev);
     	(*stack)->prev = NULL;
 
   printf(stderr, "L%d: can't add, stack too short\n", line_number);
   exit(EXIT_FAILURE);
	}

}   
