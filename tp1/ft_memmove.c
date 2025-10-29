/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:45:15 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/29 13:26:22 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove( void *dest, void *source, size_t size )
{
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *)dest;
	src = (unsigned char *)source;
	if (src < dst)
	{
		while (size != 0)
		{
			size--;
			dst[size] = src[size];
		}
	}
	else
		ft_memcpy(dst, src, size);
	return (dest);
}