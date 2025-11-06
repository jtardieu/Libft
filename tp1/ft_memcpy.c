/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:43:08 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/06 17:28:58 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t size)
{
	size_t	i;
	char	*va;
	char	*la;

	i = 0;
	va = (char *)dest;
	la = (char *)src;
	if (!va && !la)
		return (va);
	while (i < size)
	{
		va[i] = la[i];
		i++;
	}
	return (va);
}
