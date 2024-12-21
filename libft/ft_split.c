/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvithara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 11:56:25 by tvithara          #+#    #+#             */
/*   Updated: 2024/12/21 11:56:27 by tvithara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

static void allocate_word(char **split_arr, char const *str, char sep)
{
    size_t i;
    size_t len;
    const char *start;

    i = 0;
    while (*str)
    {
        len = 0;
        if (*str != sep)
        {
            start = str;
            while (*str && *str != sep)
            {
                len++;
                str++;
            }
            split_arr[i] = copy_word(start, len);
            /*if (!split_arr[i])
            {
                // free_all(split_array, i);
                return NULL;
            }
            */
            i++;
        }
        else
            str++;
    }
    split_arr[i] = NULL;
}

char **ft_split(char const *s, char c)
{
    size_t i;
    size_t len;
    const char *start;
    char **split_array;

    if(!s)
        return (NULL);
    split_array = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
    if (!split_array)
        return (NULL);
    allocate_word(split_array,s,c);
    return (split_array);
}

/*
int main(void)
{
    char *str = "Hello, World! How are you today?";
    char *str1 = "Hello, World!";
    char **split_str = ft_split(str, ' ');
    int	i;
    
    i = 0;
	while (split_str[i] != 0)
	{
		printf("word: %s\n", split_str[i]);
		i++;
	}
    return (0);
}
*/
