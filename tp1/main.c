/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:56:57 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/06 17:39:27 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"
#include <fcntl.h>

void chat(unsigned int i , char* miou); 

int main(int ac ,char **av)
{
	(void) ac;
	// char **chien = ft_split(av[1],av [2][0]);
	//  int a =ft_atoi((av[1]));
	

	//printf("chien %s\n",chien);
	//printf ("chien %s\n",&chien[1]);

	int	fd;

//	Ouvre un descripteur de fichier pour le fichier "test.txt"
//	En mode écriture seule, tronquée et crée le fichier s'il
//	n'existe pas. Permissions de lecture et d’écriture pour le
//	propriétaire et de lecture pour le groupe.
	fd = open("test.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
//	S'il y a eu un problème, on arrête tout
	if (fd == -1)
		return (1);
//	Imprime le fd du nouveau fichier ouvert
	printf("fd = %d\n", fd);

	ft_putnbr_fd(ft_atoi(av[1]),fd);
//	Écrit dans le fichier
	//write(fd, av[1], 13);
//	Ferme le fichier
	close(fd);








	
	// printf("   _-%c-_  \n",av[2][0]);

	// chien = ft_split(a,b);

	
		//printf("%s\n",chien);	
		
	

//	while (i--)
//		free (chien[i]);
		 
//free (chien);
}

void chat(unsigned int i , char* miou)
{
	printf("i = %d\nmiou = %s ",i,miou);
}