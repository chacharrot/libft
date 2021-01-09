/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:11:50 by scha              #+#    #+#             */
/*   Updated: 2021/01/09 03:27:09 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	cp;

	str = (unsigned char *)s;
	cp = (unsigned char)c;
	i = 0;
	while (i++ < len && *str)
	{
		if (*str == cp)
			return (str);
		str++;
	}
	if(cp == 0 && !*str)
		return(str);
	return (NULL);
}
