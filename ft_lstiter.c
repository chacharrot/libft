/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 17:34:44 by scha              #+#    #+#             */
/*   Updated: 2021/01/12 19:35:35 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*count;

	if (!f || !lst)
		return ;
	count = lst;
	while (count)
	{
		f(count->content);
		count = count->next;
	}
}
