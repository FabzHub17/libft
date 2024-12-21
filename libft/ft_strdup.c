/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvithara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 11:38:05 by tvithara          #+#    #+#             */
/*   Updated: 2024/12/21 11:38:08 by tvithara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    char *ptr;

    ptr = malloc((ft_strlen(s) + 1) * sizeof(char));
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
