/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:57:08 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/30 18:29:23 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	char **envoie;
	char *copy;
	int i=0;
	int j=0 ;
	copy = (char *)s;

	while (s[i+j])
	{
		
		if (!ft_strchr(s[i+j],c))
			{
				j+=i;
				*envoie = malloc(sizeof(char)*i);
				ft_strlcpy(*envoie,s[i+j],i);
				envoie++;
				i=0;
			}
		i++;
	}
	return envoie;
}