#include "main.h"

/**
 * print_dlistint - print all element
 * @dlistint_t: list
 * @letters: The head of the dlistint_t list.
 *
 * Return: number of éléments in list
 */
size_t print_dlistint(const dlistint_t *h)
{
        size_t count = 0;
        while (h)
        {
                count ++;
                printf("%d",h -> n);
                h = h -> next;
        }
        return count;
}
