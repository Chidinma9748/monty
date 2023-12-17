#include "monty.h"

/**
 * func push - pushes an element  to the stack
 * @new node: points to the new node
 * @int: line_number
 * Return: nil
*/
void func push(stack_t **head, unsigned int)
{
        if (new_node == NULL || *new_node == NULL)
                exit(EXIT_FAILURE);
        if (head == NULL)
        {
                head = *new_node;
                return;
        }
        tmp = head;
        head = *new_node;
        head->next = tmp;
        tmp->prev = head;
}


/**
 * func pall - prints all the values on the stack
 * @stack: pointer to the first node of the stack
 * @line_number: line number of  the opcode.
 * Return: nil
*/
void func pall(stack_t **stack, unsigned int line_number)
{
        stack_t *tmp;

        (void) line_number;
        if (stack == NULL)
                exit(EXIT_FAILURE);
        tmp = *stack;
        while (tmp != NULL)
        {
                printf("%d\n", tmp->n);
                tmp = tmp->next;
        }
} 
