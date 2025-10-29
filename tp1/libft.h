/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:02:45 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/29 16:40:58 by jtardieu         ###   ########.fr       */
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
int	ft_atoi(char *str);

void	ft_bzero( void *ptr, size_t count );
void	*ft_memcpy( void *dest,const void *source, size_t size );
void	*ft_memmove( void *dest, void *source, size_t size );
void	*ft_memset( void *ptr, int value, size_t size );
void    *ft_memchr(const void *memo, int c, size_t size);

char *ft_strnstr(const char *big,	const char *little, size_t len);
char *ft_strchr( const char * str, int findc );


#endif

