#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: A pointer to the pointer of the first element in the linked list.
 * Return: The data inside the element that was deleted, or 0 if the list is empty.
 * Description: This function removes the first node (head) from the linked list,
 * freeing its memory and updating the head pointer to point to the next node.
 * If the list is empty, it returns 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
