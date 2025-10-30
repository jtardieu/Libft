/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:43:25 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/30 15:15:06 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int i = -1;
	char *tab = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2))+1);
	while (s1[++i])
		tab[i]=s1[i];
	int j = -1;

	while (s2[++j])
		tab[i+j]=s2[j];

	return(tab);
}
