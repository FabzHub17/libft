/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvithara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 11:37:28 by tvithara          #+#    #+#             */
/*   Updated: 2024/12/21 11:37:30 by tvithara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t i;

    i = 0;
    if (*needle == '\0')
        return ((char *)haystack);
    while (n && *haystack)
    {
        if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
            return ((char *)haystack);
        haystack++;
        n--;
    }
    return (NULL);
}

/*
TEST

int main(void)
{
    char str[] = "Hello World!";
    char *needle = "lo";
    char *result = ft_strnstr(str, needle, 11);
    if (result)
    {
        printf("'%s' found in '%s'\n", needle, str);
        printf("result: %s\n", result);
    }
    else
        printf("'%s' not found in '%s'\n", needle, str);
    return (0);
}
*/
