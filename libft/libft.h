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
#include <stdlib.h>
#include <unistd.h>

size_t ft_strlen(const char *str);
void *ft_memcpy(void *dest, const void *src, size_t n);
size_t ft_strlcat(char *dest, const char *src, size_t size);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void ft_bzero(void *ptr, size_t n);
void *ft_calloc(size_t count, size_t n);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strchr(const char *s, int c);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);


#endif
