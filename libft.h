#ifndef LIBFT_H
# define LIBFT_H
#include <stddef.h>
#include <stdlib.h>
int		ft_isprint(int x);
int		ft_isdigit(int x);
int		ft_isascii(int x);
int		ft_isalpha(int x);
int		ft_isalnum(unsigned char x);
int		ft_atoi(char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_memcmp(const void *s1, const void *s2, unsigned int n);
size_t	ft_strlcpy(char *dst, const char *src, size_t ds_size);
size_t	ft_strlcat(char *dst, const char *src, size_t dst_size);
void	*ft_memmove(void *dst, const void *src, unsigned int n);
char	*ft_strncat(char *dst, const char *src, size_t nb);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memset(void *s, int c, unsigned int len);
char	*ft_strdup(char *src);
int		tolower(int x);
int		ft_toupper(int x);
int		ft_strlen(const char *str);

#endif