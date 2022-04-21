#include "lists.h"

/**
 * free_list - frees al list
 * @head: head of the linked list
 * Retrun: no return
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
