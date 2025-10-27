/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:35:43 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/27 14:02:43 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start,size_t len);

int main (int ac , char **av)
{
	char *chien;
	(void) ac;
	int a = atoi(av[2]);
	//int b = atoi(av[3]);
	chien = ft_substr(NULL,a,456);
	printf("%s",chien);
	free (chien);
}

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t i = 0;
	char *tab = malloc(sizeof(char)*len);

	while (s[start]&& ++i <= len)
		tab[i-1] = s[start++];
	return (tab);
}