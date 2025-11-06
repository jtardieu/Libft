/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:57:08 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/06 17:18:23 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nbword(char const *str, char c);
void	freeall(char **str, int taille);
int		newmot(char const *str, char c);

char	**ft_split(char const *s, char c)
{
	char	**envoie;
	int		i;
	int		cmpmot;
	int		mot;

	cmpmot = 0;
	i = 0;
	if (!s)
		return (0);
	envoie = ft_calloc(nbword(s, c) + 1, sizeof(char *));
	if (!envoie)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		mot = newmot(&s[i], c);
		envoie[cmpmot] = ft_substr(s, i, mot);
		if (!envoie[cmpmot])
			return (freeall(envoie, cmpmot), NULL);
		i += mot;
		cmpmot++;
	}
	envoie[cmpmot] = NULL;
	return (envoie);
}

int	nbword(char const *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (c == '\0')
		return (1);
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			j++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (j);
}

void	freeall(char **str, int taille)
{
	int	i;

	i = 0;
	while (i != taille)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	newmot(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}
