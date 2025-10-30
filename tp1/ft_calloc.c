/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:46:20 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/30 14:34:02 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t count, size_t size )
{
	size_t i ;
	void *tab;

	i = count *size ;
	if (size == 0 && (i/count != size))
		return (NULL);

	tab = malloc(i);

	if (tab == NULL)
		return(NULL);

	ft_bzero(tab,i);

	return (tab);
}
