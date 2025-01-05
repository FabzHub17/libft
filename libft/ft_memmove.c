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
	size_t				i;

	if (dest == NULL && src == NULL)
		return (dest);
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		// Se la destinazione è prima della sorgente in memoria,
		// possiamo copiare normalmente dall'inizio verso la fine.
		if (d < s)
			d[i] = s[i];
		else
			// Se la destinazione si sovrappone alla sorgente, dobbiamo copiare al contrario,
			// partendo dall'ultimo byte verso il primo, per evitare di sovrascrivere i dati.
			d[n - i - 1] = s[n - i - 1];
		i++;
	}
	return (dest);
}

/* 
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	data[50];

	data[50] = "Hello, world!";
	ft_memmove(data + 7, data, 5);
	printf("%s\n", data); // Output: "Hello, Hello!"
	return (0);
} */
