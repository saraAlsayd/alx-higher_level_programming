#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked
 * @n: the integer
 * @next: the point.
 *
 * Description: singly linked list.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
#endif

