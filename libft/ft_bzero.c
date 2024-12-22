/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvithara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 11:33:20 by tvithara          #+#    #+#             */
/*   Updated: 2024/12/22 17:25:22 by tvithara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)ptr;
	while (n != 0)
	{
		*s = 0;
		s++;
		n--;
	}
}
/*
** Test
#include <stdio.h>

int	main(void)
{
	char	buffer[];

	buffer[] = "Hello";
	ft_bzero(buffer, (sizeof(buffer) - 1));
	printf("%s\n", buffer);
	return (0);
}
*/
