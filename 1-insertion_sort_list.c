#include "sort.h"


listint_t *swapper(listint_t **list, listint_t *act, listint_t *nxt)
{
	if (act->prev)
		(act->prev)->next = nxt;

	else
		*list = nxt, nxt->prev = NULL;

	if ((nxt->next))
		(nxt->next)->prev = act;

	nxt->prev = act->prev;
	act->prev = nxt;
	act->next = nxt->next;
	nxt->next = act;

	return (act);
}



void insertion_sort_list(listint_t **list)
{
	listint_t *act = NULL, *pr = NULL, *check = NULL;

	if (!list || !(*list))
		return;

	act = (*list)->next;

	while (act)
	{
		pr = act->prev;
		check = act;

		while (check->n < pr->n && check->n)
		{
			act = swapper(list, pr, check);

			print_list(*list);

			if (!check->prev)
				break;


			pr = check->prev;
		}
		act = act->next;
		pr = pr->next;
	}
}
