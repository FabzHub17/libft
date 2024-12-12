#include "libft.h"

void *memchr(const void *str, int c, size_t n)
{
    const unsigned char *s;

    s = (const unsigned char *)str;
    c = (unsigned char)c;
    while (n > 0 && *s != c)
    {
        s++;
        n--;
    }
    if (n)
        return ((void *)s);
    return (NULL);
}