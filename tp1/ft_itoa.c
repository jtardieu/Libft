/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:36:47 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/31 17:05:19 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int exposant(int n);

char *ft_itoa(int n)
{
	unsigned long i;
	int nbchar;
	char *envoie;
	int sign;

	nbchar = exposant(n);
	i=n;
	sign = 0;
	if (0>n)
		sign++;
	envoie = ft_calloc(nbchar + sign, sizeof(char));

	if (0>n)
		envoie[0]='-';

	while (n)
	{
		envoie[n--] = i%10;
		i/=10;

	}
	return(envoie);
}

int exposant(int n)
{
	unsigned long i;

	i=0;
	while (n)
	{
		n/=10;
		i++;
	}
	return (i);
}