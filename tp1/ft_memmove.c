/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:06:08 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/27 17:08:43 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void * ft_memmove( void * dest, void *source, size_t size );

int main(int ac,char **av)
{
	int tab[]= {45 ,32,12,789,45};
	int cpy[5];
	(void)ac;
	int size = atoi(av[1]);
	ft_memmove(cpy , tab , size );
	int i = -1;
	while (++i!=5)
		printf("%d \t",cpy[i]);

}

void * ft_memmove( void * dest, void * source, size_t size )
{
	size_t i = 0;
	char *la = (char *)source;
	char *va = (char *)dest;

	while (size != i )
	{
		va[i] = la[i];
		i++;
	}
	return (va);
}
