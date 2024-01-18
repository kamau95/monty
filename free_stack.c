#include "monty.h"
/**
* clear_stack - deletes contents of a doubly linked list
* @head: head of the stack or queue
*/
void clear_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
