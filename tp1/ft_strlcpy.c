/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:36:56 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/27 17:58:16 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strlcpy(char *dest, char *src,size_t destaille);

int	main(int ac , char **av)
{
	(void) ac;
	char *src = av[1];
	char chien[atoi(av[2])] ;
	ft_strlcpy(chien , src , atoi(av[2]));
	printf("%s",chien);
}

char	*ft_strlcpy(char *dest, char *src,size_t destaille)
{
	size_t	i;

	i = -1;
	while (src[++i] && i>=destaille)
	{
		dest[i] = src[i];
		
	}
	dest[i] = src[i];
	return (dest);
}