/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:43:25 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/03 12:22:32 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t i ;
	char *tab;

	if (!s1||!s2)
		return (NULL);

	i = ft_strlen(s1)+ft_strlen(s2);

	tab = ft_calloc(i+1 ,sizeof(char));

	if (!tab)
		return(NULL);

	ft_strlcpy(tab , s1 , i);
	ft_strlcat(tab , s2, i);

	return(tab);
}
