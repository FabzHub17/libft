/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvithara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:53:58 by tvithara          #+#    #+#             */
/*   Updated: 2024/12/10 20:06:00 by tvithara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *str);
void *ft_memcpy(void *dest, const void *src, size_t n);
size_t ft_strlcat(char *dest, const char *src, size_t size);

#endif
