/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvithara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:30:41 by tvithara          #+#    #+#             */
/*   Updated: 2024/12/10 20:13:31 by tvithara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memset(void *ptr, int c, size_t n)
{
	unsigned char *str;
	size_t i;

	i = 0;
	str = (unsigned char *)ptr;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (ptr);
}

/*
** Test

#include <stdio.h>

int main(void)
{
	unsigned int i;

	i = 0;
	char buffer[] = "FFFF";
	ft_memset(buffer, 'A', (sizeof(buffer) - 1));
	printf("%s\n", buffer);
	return (0);
}
*/
