/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvithara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 11:35:55 by tvithara          #+#    #+#             */
/*   Updated: 2024/12/21 11:35:58 by tvithara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char *ptr;

    ptr = (char *)s; 
    while (*ptr)
    {
        if (*ptr == (char)c)
            return (ptr);
        ptr++;
    }
    if (c == '\0') 
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
