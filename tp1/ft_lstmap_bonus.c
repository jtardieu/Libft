/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:24:50 by jtardieu          #+#    #+#             */
/*   Updated: 2025/11/11 17:41:45 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tampon;
	t_list	*startlst;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	startlst = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (ft_lstclear(&startlst, del), NULL);
		tampon = ft_lstnew(content);
		if (!tampon)
			return (ft_lstclear(&startlst, del), NULL);
		ft_lstadd_back (&startlst, tampon);
		lst = lst->next;
	}
	return (startlst);
}
