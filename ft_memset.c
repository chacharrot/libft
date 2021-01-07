/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:16:53 by scha              #+#    #+#             */
/*   Updated: 2021/01/07 19:17:07 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *dest, int c, size_t len)
{
	char			*str;
	unsigned char	cc;
	size_t			i;

	str = (char *)dest;
	cc = (unsigned char)c;
	i = 0;
	while (i < len)
		str[i++] = cc;
	return (dest);
}
