/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 12:18:17 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/30 11:24:17 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strdup( const char * source )
{
	char	*transfert;
	size_t	taille;

	taille = ft_strlen(source);
	transfert = malloc(sizeof(char) * taille + 1 );
	if (transfert == NULL)
		return (0);
	ft_strlcpy(transfert, source, taille);
	return (transfert);
}

