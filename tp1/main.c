/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:56:57 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/31 15:26:34 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"

int main(int ac ,char **av)
{

	(void) ac;
	int a =ft_atoi((av[1]));
	char *chien = ft_itoa(a);
	printf("%s\n",chien);


		// chien = ft_strtrim(a,b);

	// printf("   _-%c-_  \n",av[2][0]);

	// chien = ft_split(a,b);

	// int i =0;
	// while (chien[i])
	// {
	// 	free (chien[i++]);
	// }
	 free (chien);
}