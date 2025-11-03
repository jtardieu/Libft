/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:56:57 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/03 17:05:20 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"

int main(int ac ,char **av)
{
	(void) ac;
	// char **chien = ft_split(av[1],av [2][0]);
	//  int a =ft_atoi((av[1]));

	char *chien = ft_strmapi(av[1],ft);

	printf("chien %s\n",chien);
	//printf ("chien %s\n",&chien[1]);

		// chien = ft_strtrim(a,b);

	// printf("   _-%c-_  \n",av[2][0]);

	// chien = ft_split(a,b);

	// int i =0;

	free (chien);
}