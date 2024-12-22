/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvithara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 11:37:09 by tvithara          #+#    #+#             */
/*   Updated: 2024/12/21 11:37:12 by tvithara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1;
    const unsigned char *str2;
    size_t i;

    str1 = (const unsigned char *)s1;
    str2 = (const unsigned char *)s2;
    i = 0;
    while (i < n && str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    if (n > i)
        return (str1[i] - str2[i]);
    return (0);
}

/*
TEST

#include <stdio.h>
int main(void)
{
    char str[] = "Hello World!";
    char str1[] = "Hello World!";
    printf("result: %d\n", ft_memcmp(str, str1, 5));
    printf("standard result: %d\n", memcmp(str, str1, 5));
    return (0);
}
*/
