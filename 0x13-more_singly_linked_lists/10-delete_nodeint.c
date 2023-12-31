#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a
 * linked list at a specified index.
 * @head: A pointer to the pointer of the first element in the list.
 * @index: The index of the node to delete (starting from 0).
 * Return: 1 (Success) or -1 (Fail).
 * Description: This function deletes the node at the specified
 * index in the linked list.
 * If the index is 0, it deletes the head node. If the
 * index is out of range or the list
 * is empty, it returns -1. If the deletion is successful, it returns 1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
