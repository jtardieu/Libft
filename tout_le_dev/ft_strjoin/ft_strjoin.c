/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:43:25 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/27 13:32:01 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2);
int strt(char const *str);

// int main (int ac , char **av)
// {
// 	char *chien;
// 	(void) ac;
// 	chien = ft_strjoin(av[1],av[2]);
// 	printf("%s et %s",av[1],av[2]);
// 	printf("\n%s",chien);
// 	free(chien) ;
// 	return (0);
// }

char *ft_strjoin(char const *s1, char const *s2)
{
	int i = -1;
	char *tab = malloc(sizeof(char) * (strt(s1) + strt(s2))+1);
	while (s1[++i])
		tab[i]=s1[i];
	int j = -1;
	while (s2[++j])
		tab[i+j]=s2[j];

	return(tab);
}

int strt(char const *str)
{
	int i = -1;
	while(str[++i])
	{}
	return (i);
}
