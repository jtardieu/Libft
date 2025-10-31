/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:02:45 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/31 16:54:46 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

size_t	ft_strlcat( char *dest,const char *src,size_t size);
size_t	ft_strlcpy(char	*dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_strncmp( const char * first, const char * second, size_t length );
int	ft_atoi(const char *str);
int ft_memcmp( const void * pointer1, const void * pointer2, size_t size );

void	ft_bzero( void *ptr, size_t count );
void	*ft_memcpy( void *dest,const void *source, size_t size );
void	*ft_memmove( void *dest, void *source, size_t size );
void	*ft_memset( void *ptr, int value, size_t size );
void    *ft_memchr(const void *memo, int c, size_t size);
void	*ft_calloc( size_t count, size_t size );

//						pas fais
void ft_striteri(char *s, void (*f)(unsigned int,char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
//__________________________________
char *ft_strnstr(const char *big,	const char *little, size_t len);
char *ft_strchr( const char * str, int findc );
char *ft_strdup( const char * source );
char *ft_substr(char const *s, unsigned int start,size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char *ft_itoa(int n);
char *ft_strrchr(const char *s, int c);

//						pas fais
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
//__________________________________
char **ft_split(char const *s, char c);
#endif

