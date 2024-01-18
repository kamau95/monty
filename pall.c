#include "monty.h"
/**
 * func_pall - outputs the stack
 * @head: stack head
 * @counter: no used
 * Return: nothing to return
*/
void func_pall(stack_t **head, unsigned int counter)
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
