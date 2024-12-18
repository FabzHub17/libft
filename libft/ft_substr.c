#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t s_len;
    char *substr;

    s_len = ft_strlen(s);
    if (!s)
        return (NULL);
    if (start >= s_len)
        return ("");
    if (len > s_len - start)
        len = s_len - start;
    substr = (char *)malloc((len + 1) * sizeof(char));
    if (!substr)
        return (NULL);
    ft_strlcpy(substr, s + start, len + 1);
    return (substr);
}

/*
TEST
int main(void)
{
    char *str = "Hello World!";
    char *substr = ft_substr(str, 6, 5);
    printf("Substring:%s\n", substr);
    free(substr);
    return (0);
}
*/