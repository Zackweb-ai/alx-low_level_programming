#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the node at a
 * specified index in a linked list.
 * @head: A pointer to the first node in the linked list.
 * @index: The index of the node to retrieve.
 * Return: A pointer to the node at the specified index, or NULL if not found.
 * Description: This function traverses the linked list from the beginning
 * to the specified index and returns a pointer to the node found at that index
 * If the index is out of range or the list is empty, it returns NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}

	return (temp ? temp : NULL);
}
