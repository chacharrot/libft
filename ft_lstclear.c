/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha </var/mail/scha>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:31:15 by scha              #+#    #+#             */
/*   Updated: 2021/01/11 17:15:13 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*dellst;

	dellst = *lst;	
	while (dellst)
	{
		temp = dellst->next;
		del(dellst->content);
		free (dellst);
		dellst = temp;
	}
	*lst = NULL;
}
