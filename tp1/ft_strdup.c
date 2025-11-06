/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 12:18:17 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/06 17:35:22 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*transfert;
	size_t	taille;
	int		i;

	i = 0;
	taille = ft_strlen(source);
	transfert = malloc(sizeof(char) * taille + 1);
	if (transfert == NULL)
		return (0);
	while (source[i])
	{
		transfert[i] = source[i];
		i++;
	}
	transfert[i] = '\0';
	return (transfert);
}
