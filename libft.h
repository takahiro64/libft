#ifndef LIBFT_H
# define LIBFT_H

#include<stdlib.h>
#include<unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	strlen(const char *s);
void	ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	ft_*memcpy(void *restrict dst, const void *restrict src, size_t n);
void	ft_*memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char dst, const char *restrict src, size_t dstsize);
size_t	ft_strlcat(char dst, const char *restrict src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	ft_*strchr(const char *s, int c);
char	ft_*strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_*memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	ft_*strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	ft_*calloc(size_t count, size_t size);
char	ft_*strdup(const char *s1);



#endif
