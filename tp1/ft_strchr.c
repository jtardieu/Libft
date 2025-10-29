/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:46:29 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/29 12:13:20 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int findc)
{
	char	cast_c;
	int		i;

	cast_c = (char)findc;
	i = 0;
	while (str[i])
	{
		if (str[i] == cast_c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == cast_c)
		return ((char *)&str[i]);
	return (0);
}