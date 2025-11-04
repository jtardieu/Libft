/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:56:57 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/04 22:50:31 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"

void chat(unsigned int i , char* miou); 

int main(int ac ,char **av)
{
	(void) ac;
	// char **chien = ft_split(av[1],av [2][0]);
	//  int a =ft_atoi((av[1]));
	int i;
	
	char *waf = av[1];
	
	char wouf = av[2][0];
	
	char **chien = ft_split(waf,wouf);
	
	
	//printf("chien %s\n",chien);
	//printf ("chien %s\n",&chien[1]);

	
	// printf("   _-%c-_  \n",av[2][0]);

	// chien = ft_split(a,b);

	i = -1 ;
	
	while (chien[++i])
	{
		printf("%s\n",chien[i]);	
	}

	while (i--)
		free (chien[i--]);
		 
	free (chien);
}

void chat(unsigned int i , char* miou)
{
	printf("i = %d\nmiou = %s ",i,miou);
}