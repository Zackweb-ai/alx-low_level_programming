#include "lists.h"

/**
 * free_listint - Frees a linked list and releases its memory.
 * @head: A pointer to the head of the listint_t list to be freed.
 * Description: This function iterates through the linked list, releasing
 * the memory allocated for each node, including the head node.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
