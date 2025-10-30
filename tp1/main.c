/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:56:57 by jtardieu          #+#    #+#             */
/*   Updated: 2025/10/30 17:37:36 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"

int main(int ac ,char **av)
{
	char * chien;
	(void) ac;
	char * a = av[1];
	char *b = av[2];
	chien = ft_strtrim(a,b);
	printf("%s",chien);
	// free (chien);
}