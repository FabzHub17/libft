#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *ptr;

    ptr = NULL;
    while (*s)
    {
        if (*s == (char)c)
            ptr = (char *)s;
        s++;
    }
    if (c == '\0')
        return ((char *)s);
    return (ptr);
}

/*
**TEST

int main(void)
{
    const char *str = "Hello World!";
    char c = 'h';
    char *ptr1 = ft_strrchr(str, c);
    char *ptr2 = strrchr(str, c);
    printf("Last occurrence with of %c in %s is %s\n", c, str, ptr1);
    printf("Last occurrence with of %c in %s is %s\n", c, str, ptr2);
    return (0);
}
*/