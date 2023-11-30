#include <lists.h>
/**
size_t print_list-function that prints all the elements of a list_t list
@str:
@k: pointeur
Return: nombre des element
*/
size_t print_list(const list_t *h);

{
    unsigned int i;

    if (h->str == NULL)
    {
        printf("[0] (nil)\n");
    }
    else
    {
        printf("[%d] ,[%s]", h->len, h->str);
    }
    h=h->next;
    i++;
    return(i);
}
