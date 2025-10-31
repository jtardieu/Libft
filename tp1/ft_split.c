/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:57:08 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/31 12:33:55 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int nbword(char const *str, char c);
void freeall(char **str,int taille );

char **ft_split(char const *s, char c)
{
	char **envoie;
	int i = 0;
	int j = 0;
	int cmpmot = 0;
	int nbmot = 0;

	nbmot = nbword(s,c);
	envoie = malloc(sizeof(char*) * nbmot+1);
	while (s[i])
	{
		while (s[i]!=c)
		{
			i++;
			j++;
		}
		if (s[i]==c)
		{
			envoie[cmpmot++] = ft_substr(s,i-j,j);
			j=0;
		}
			if (envoie[cmpmot-1]==NULL)
		{
			freeall(envoie,nbmot);
		}

		while (s[i]==c&& s[i])
			i++;

	}
	envoie[cmpmot]=NULL;
	return (envoie);
}

int nbword(char const *str, char c)
{
	int i = 0;
	int j = 0;
	while (str[i])
	{
		while (str[i]==c)
			i++;
		if (str[i]!=c)
			j++;
		while (str[i]!=c&& str[i])
			i++;
	}
	return (++j);
}

void freeall(char **str,int taille)
{
	int i = 0;
	while ( i == taille)
	{
		free(str[i]);
		i++;
	}
}