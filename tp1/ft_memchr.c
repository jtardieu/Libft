/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:53:59 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/03 16:24:32 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char    *cs;
    unsigned char    cc;
    size_t    i;

    cs = (unsigned char *)s;
    cc = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        if (cs[i] == cc)
            return ((void *)&cs[i]);
        i++;
    }
    return (NULL);
}