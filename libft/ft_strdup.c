#include "libft.h"

char *ft_strdup(const char *s)
{
    char *ptr;

    ptr = (char *)malloc(ft_strlen(s) + 1);
    if (!ptr)
        return (NULL);
    ft_strlcpy(ptr, s, ft_strlen(s) + 1);
    return (ptr);
}

/*
TEST
int main(void)
{
    char *str = "Hello World!";
    char *dup = ft_strdup(str);
    printf("Duplicate: %s\n", dup);
    free(dup);
    return (0);
}
*/