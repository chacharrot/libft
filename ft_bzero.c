/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:05:20 by scha              #+#    #+#             */
/*   Updated: 2021/01/07 19:05:38 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t len)
{
	char	*destcpy;

	destcpy = (char *)dest;
	while (len-- > 0)
		destcpy[len] = '\0';
	return ;
}
