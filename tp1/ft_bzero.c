/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:55:54 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/27 16:00:06 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_bzero( void * pointer, size_t count );

int main(int ac,char **av)
{
	int tab[]= {46 ,32,12,789,4000554};
	(void)ac;
	int count = atoi(av[1]);
	ft_bzero(tab  , count );
	int i = -1;
	while (++i!=5)
		printf("%d \t",tab[i]);

}

void ft_bzero( void * pointer, size_t count )
{
	size_t i= 0;
	char *str =(char *)pointer;

	while (count != i )
	{
		str[i++]=0;
	}

}
