#include "monty.h"

/**
 * pstr_op - function that prints the string starting at
 * the top of the stack, followed by a new line.
 *
 * @stack: Pointer to the stack.
 * @line_number: Line number of the instruction.
 *
 * Return: void.
 */
void pstr_op(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int ascii_value;

	while (tmp != NULL && tmp->n != 0)
	{
		ascii_value = tmp->n;

		if (ascii_value < 0 || ascii_value > 127)
			break;

		printf("%c", ascii_value);
		tmp = tmp->next;
	}

	printf("\n");
}
