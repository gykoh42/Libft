#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int	ft_isprint(int c);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
int ft_tolower(int c);
int ft_toupper(int c);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);

#endif