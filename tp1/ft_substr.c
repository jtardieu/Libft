/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:35:43 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/30 15:08:52 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t i = 0;
	char *tab = malloc(sizeof(char)*len);

	while (s[start]&& ++i <= len)
		tab[i-1] = s[start++];
	return (tab);
}