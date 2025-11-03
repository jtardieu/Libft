/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:46:20 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/03 11:40:06 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t count, size_t size )
{
	size_t i ;
	void *tab;

	i = count *size ;
	if (size && (i / size != count))
		return (NULL);

	tab = malloc(i);

	if (!tab)
		return(NULL);
	else
		ft_bzero(tab,i);

	return (tab);
}
