/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvithara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 12:46:13 by tvithara          #+#    #+#             */
/*   Updated: 2024/12/21 12:46:15 by tvithara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_numlen(int n)
{
    int len;

    len = 0;
    if(n < 0)
    {
        len++;
        n = -n; 
    }
    while(n != 0)
    {
        len++;
        n /= 10;
    }
    return (len);
}

char *ft_itoa(int n)
{
    int len;
    char *str;

    len = ft_numlen(n);
    str = malloc((len +1) * sizeof(char));
    if(!str)
        return (NULL);
    str[len] = '\0';
    len--;
    if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
	}
    if(n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    while(n > 0)
    {
        str[len] = (n % 10) + '0';
        n /= 10;
        len--;
    }
    return str;
}
/*
int main(void)
{
    int num;
    int num1;
    char *result;

    num = 123;
    num1 = -2147483648;
    result = ft_itoa(num1);
    printf("result: %s\n", result);
    free(result);
    return (0);
}
*/