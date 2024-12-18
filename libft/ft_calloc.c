#include "libft.h"

void *ft_calloc(size_t count, size_t n)
{
    void *ptr;

    ptr = malloc(count * n);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count * n);
    return (ptr);
}