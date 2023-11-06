#ifndef _LIBFT_H
#define _LIBFT_H

#include <stdio.h>
#include <string.h>
char	*ft_strcpy(char *dst, const char *src);
int	ft_memcmp(void *s1, void *s2, unsigned int n);
int	ft_isalnum(int x);
int	ft_atoi(const char *str);
void    *ft_memcpy(void *dest, const void *src, unsigned int n);
void    ft_bzero(void *s, unsigned int n);
void    *ft_memset(void *s, int c, unsigned int n);
#endif