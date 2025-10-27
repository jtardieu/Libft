/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:57:13 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/27 15:55:15 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void * ft_memset( void * pointer, int value, size_t count );

// int main(int ac,char **av)
// {
// 	int tab[]= {45 ,32,12,789,45};
// 	(void)ac;
// 	int val = atoi(av[1]);
// 	int count = atoi(av[2]);
// 	ft_memset(tab , val , count );
// 	int i = -1;
// 	while (++i!=5)
// 		printf("%d \t",tab[i]);

// }

void * ft_memset( void * pointer, int value, size_t count )
{
	size_t i= 0;
	char *str =(char *)pointer;

	while (count != i )
	{
		str[i++]=value;
	}
	return (str);
}
