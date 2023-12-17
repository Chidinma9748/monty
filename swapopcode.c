#include "monty.h"
/**
 * func swap - adds the top two elements of the stack.
 * @stack: pointer to the top two elements of the stack hea
 * @line_number: line_number
 * Return: nil
*/
void func swap(stack_t **stack, unsigned int line_number)
	{
	stack_t *tmp;
	int length = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		func printf(stderr, "L%d: can't swap, stack too short\n",line_numberr);
		exit(EXIT_FAILURE);
	}
        h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
	}	
