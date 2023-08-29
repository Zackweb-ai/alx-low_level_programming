#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head pointer to NULL.
 * @head: A pointer to a pointer to the listint_t list to be freed.
 * Description: This function iterates through the linked list, releasing
 * the memory allocated for each node, including the head node. After
 * freeing all nodes, it sets the head pointer to NULL to prevent
 * accidental access to the freed memory.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
