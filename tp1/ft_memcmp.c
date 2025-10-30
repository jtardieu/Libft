/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:52:48 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/30 11:11:02 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp( const void * pointer1, const void * pointer2, size_t size )
{
{
	size_t	i;

	char *ptr1;
	char *ptr2;

	ptr1 = (char *)pointer1;
	ptr2 = (char *)pointer2;
	i = 0;
	while (i < size)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}
}