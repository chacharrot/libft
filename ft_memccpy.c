/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:11:06 by scha              #+#    #+#             */
/*   Updated: 2021/01/07 19:11:14 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	unsigned char	*dstu;
	unsigned char	*srcu;

	dstu = (unsigned char*)dst;
	srcu = (unsigned char*)src;
	while (len-- && *srcu)
	{
		if (*srcu == (unsigned char)c)
			return (dst + len + 1);
		*dstu = *srcu;
		dstu++;
		srcu++;
	}
	return (NULL);
}
