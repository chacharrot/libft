/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha </var/mail/scha>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:59:39 by scha              #+#    #+#             */
/*   Updated: 2021/01/11 15:10:16 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*count;

	if (!lst)
		return (0);
	i = 0;
	count = lst;
	while (count->next !=NULL)
	{
		i++;
		count = count->next;
	}
	i++;
	return (i);
}
