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
	char *str;
	size_t i;

	i = 0;
	str = (char *)ptr;
	while(i < n)
	{
		str[i] = c;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int main(void)
{
	int i;

	i = 0;
	char buffer[] = "FFFFF";
	ft_memset(buffer,'A',5);
	while(buffer[i] != '\0')
	{
		printf("%c",buffer[i]);
		i++;
	}
	return (0);
}
*/
