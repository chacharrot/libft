/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:15:05 by scha              #+#    #+#             */
/*   Updated: 2021/01/07 20:00:09 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	size_t			i;

	temp1 = (unsigned char*)dst;
	temp2 = (unsigned char*)src;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
	{
		i = 0;
		while (i < len)
			temp1[i++] = temp2[i];
	}
	return (dst);
}
