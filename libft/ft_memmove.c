/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvithara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 11:34:19 by tvithara          #+#    #+#             */
/*   Updated: 2024/12/21 11:34:22 by tvithara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s || n == 0)
		return (dest);
	if (d < s || d >= s + n)
		return (ft_memcpy(d, s, n));
	else
	{
		d += n - 1;
		s += n - 1;
		while (n > 0)
		{
			*d = *s;
			d--;
			s--;
			n--;
		}
	}
	return (dest);
}

/*
**Test

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	data[];

    data[] = "Hello, world!";
    ft_memmove(data + 7, data, 6);
    printf("%s\n", data); // Output: "Hello, Hello!"
    return (0);
}

*/
