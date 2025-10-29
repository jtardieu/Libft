/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:53:59 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/29 16:06:19 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *memo, int c, size_t size)
{
    char    cast_c;
    char    *cs;
    size_t    i;

    cast_c = (char)c;
    cs = (char *)memo;
    i = 0;
    while (cs[i] && i < size)
    {
        if (cs[i] == cast_c)
            return ((char *)&cs[i]);
        i++;
    }
    if (cs[i] == cast_c && i < size)
        return ((char *)&cs[i]);
    return (NULL);
}