/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:14:34 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/27 14:58:00 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start,size_t len);

int main (int ac , char **av)
{
	char *chien;
	(void) ac;
	chien = ft_strtrim(av[1],av[2]);

	printf("%s",chien);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int i= -1;
	// while ();
}

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t i = 0;
	char *tab = malloc(sizeof(char)*len);

	while (s[start]&& ++i <= len)
		tab[i-1] = s[start++];
	return (tab);
}