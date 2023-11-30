#include "lists.h"
/**
size_t print_list-function that prints all the elements of a list_t list
@h::
Return: nombre des element
*/
size_t print_list(const list_t *h)
{
    unsigned int i;

    while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%d] %s\n", h->len, h->str);
        }
        h = h->next;
        i++;
    }
    return (i);
}
