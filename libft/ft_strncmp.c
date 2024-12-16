#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n && s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (n > i)
        return (s1[i] - s2[i]);
    return (0);
}

/*
TEST
#include <stdio.h>
int main(void)
{
    char str[] = "Hello World!";
    char str1[] = "Hello World!";
    printf("result: %d\n", ft_strncmp(str, str1, 5));
    printf("standard result: %d\n", strncmp(str, str1, 5));
    return (0);
}
*/