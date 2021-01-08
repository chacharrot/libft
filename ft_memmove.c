/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:15:05 by scha              #+#    #+#             */
/*   Updated: 2021/01/08 19:04:07 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp1;
	unsigned char	*temp2;

	if (dst == NULL && src == NULL)
		return (NULL);
	temp1 = (unsigned char*)dst;
	temp2 = (unsigned char*)src;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
	{
		while (len)
		{
			--len;
			temp1[len] = temp2[len];
		}
	}
	return (dst);
}
