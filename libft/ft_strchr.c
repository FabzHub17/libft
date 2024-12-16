#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char *ptr;

    ptr = (char *)s; // siccome la funzione ritorna un char *
    while (*ptr)
    {
        if (*ptr == (char)c)
            return (ptr);
        ptr++;
    }
    if (c == '\0') // usare anche c == 0 è uguale.
        return (ptr);
    return (NULL);
}

/*
TEST

int main(void)
{
    const char *str = "Hello World!";
    char c = 'o';
    char *ptr = ft_strchr(str, c);
    printf("First occurrence of %c in %s is %s\n", c, str, ptr);
    return (0);
}

*/