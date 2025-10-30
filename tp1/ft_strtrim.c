/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:14:34 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/30 17:56:58 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*envoie;
	int i ;

	len = ft_strlen(s1);
	i=1;
	if (!s1 || !set)
		return (NULL);

	while (s1[i] && ft_strchr(set, s1[i]))
		i++;

	while (s1[i] && ft_strchr(set, s1[len]))
		len--;

	envoie = ft_substr(s1, i, len-i+1);

	return (envoie);
}

