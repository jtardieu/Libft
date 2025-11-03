/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:35:43 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/03 12:07:20 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char *tab;

	if (!s)
		return (0);

	if (start >= ft_strlen(s))
		return (ft_strdup(""));

	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;

	tab = malloc(sizeof(char)*len+1);

	if (!tab)
		return (NULL);

	ft_strlcpy(tab , s+start ,len + 1);
	return (tab);
}