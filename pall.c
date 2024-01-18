#include "monty.h"
/**
 * f_pall - Prints the values on the stack,
 * starting from the top
 * @head: stack head
 * @counter: no used
 * Return: Nothing. The function may print
 * an error message and exit if the stack is empty.
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
