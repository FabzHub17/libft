/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvithara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 11:38:34 by tvithara          #+#    #+#             */
/*   Updated: 2024/12/21 11:38:36 by tvithara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*joined_str;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined_str = (char *)malloc(total_len * sizeof(char));
	if (!joined_str)
		return (NULL);
	ft_strlcpy(joined_str, s1, ft_strlen(s1) + 1);
	ft_strlcat(joined_str, s2, total_len);
	return (joined_str);
}

/*
TEST
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*joined;

    str1 = "Hello ";
    str2 = "World!";
    joined = ft_strjoin(str1, str2);
    printf("Joined string: %s\n", joined);
    free(joined);
    return (0);
}
*/
