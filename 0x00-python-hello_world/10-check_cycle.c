#include "lists.h"
/**
*check_cycle - checks a linked list.
*@list: linked list.
*
*Return: 1 if list has a cycle, 0 if doesn't
*/
int check_cycle(listint_t *list)
{
listint_t *slow, *fast;
slow = fast = list;
while (slow && fast && fast->next)
{
slow = slow->next;
fast  = fast->next->next;
if (!list)
return (0);

if (slow == fast)
{
return (1);
}
}
return (0);
}

