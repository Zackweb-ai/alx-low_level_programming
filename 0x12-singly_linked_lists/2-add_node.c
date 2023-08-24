#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: double pointer to head node
 * @str: new string 
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str) {
	list_t *n;
	unsigned int l = 0;

	while (str[l])
	l++;

	n = malloc(sizeof(list_t));
	if (!n)
	{
	perror("malloc");
	return (NULL);
	}

	n->str = strdup(str);
	if (!n->str) {
	perror("strdup");
	free(n);
	return NULL;
	}

	n->l = l;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
