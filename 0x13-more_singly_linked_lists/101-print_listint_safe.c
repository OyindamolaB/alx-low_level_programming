#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _r - reallocates memory for an array of pointers
* to the nodes in a linked list
* @list: the old list to append
* @size: size of the new list (always one more than the old list)
* @new: new node to add to the list
* Return: pointer to the new list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
