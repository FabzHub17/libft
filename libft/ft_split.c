#include "libft.h"

static size_t count_words(const char *s, char c)
{
    size_t count;
    size_t new_word;

    count = 0;
    new_word = 0;
    while (*s)
    {
        if (*s != c && !new_word)
        {
            count++;
            new_word = 1;
        }
        else if (*s == c)
            new_word = 0;
        s++;
    }
    return (count);
}

static char *copy_word(const char *start, size_t len)
{
    char *word;

    word = (char *)malloc((len + 1) * sizeof(char));
    if (!word)
        return (NULL);
    ft_strlcpy(word, start, len + 1);
    return (word);
}

char **ft_split(char const *s, char c)
{
    size_t i;
    size_t len;
    const char *start;
    char **split_array;

    split_array = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
    if (!split_array)
        return (NULL);
    i = 0;
    len = 0;
    while (*s)
    {
        if (*s != c)
        {
            start = s;
            while (*s && *s != c)
            {
                len++;
                s++;
            }
            split_array[i] = copy_word(start, len);
            if (!split_array[i])
            {
                // free_all(split_array, i);
                return NULL;
            }
            i++;
        }
        else
            s++;
    }
    split_array[i] = NULL;
    return (split_array);
}

void print_split_result(char **result)
{
    if (!result)
    {
        printf("Errore: risultato NULL.\n");
        return;
    }

    int i = 0;
    while (result[i])
    {
        printf("Parola %d: '%s'\n", i + 1, result[i]);
        i++;
    }
    printf("Totale parole: %d\n", i);

    // Libera la memoria allocata
    i = 0;
    while (result[i])
    {
        free(result[i]);
        i++;
    }
    free(result);
}
int main(void)
{
    char *str = "Hello, World! How are you today?";
    char **split_str = ft_split(str, ' ');
    print_split_result(split_str);
    return (0);
}