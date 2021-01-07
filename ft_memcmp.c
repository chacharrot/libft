/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:13:02 by scha              #+#    #+#             */
/*   Updated: 2021/01/07 19:13:09 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)b1;
	str2 = (unsigned char *)b2;
	while (len--)
	{
		if (str1 != str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
