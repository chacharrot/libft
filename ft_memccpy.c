/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:11:06 by scha              #+#    #+#             */
/*   Updated: 2021/01/09 03:08:18 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	unsigned char	*dstu;
	unsigned char	*srcu;
	size_t			i;

	dstu = (unsigned char*)dst;
	srcu = (unsigned char*)src;
	i = 0;
	while (i < len && srcu[i] != (unsigned char)c)
	{
		dstu[i] = srcu[i];
		i++;
	}
	if (i == len)
		return (NULL);
	else
	{
		dstu[i] = srcu[i];
		i++;
		return (&dstu[i]);
	}
}
