#include"sort.h"

/**
* insertion_sort_list - insertion sorting algorithm
* @list: linked list to sort
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *p;
	int n;

	if (!list)
	{
		return;
	}
	p = *list;
	while (p)
	{
		while (p)
		{
			if (p->next)
			{
				if (p->n > p->next->n)
				{
					n = p->n;
					*(int *)&p->n = p->next->n;
					*(int *)&p->next->n = n;
					p = *list;
					print_list(*list);
					break;
				}
			}
			p = p->next;
		}
	}
}
