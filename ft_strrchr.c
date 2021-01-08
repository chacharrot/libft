/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:33:19 by scha              #+#    #+#             */
/*   Updated: 2021/01/07 22:08:35 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*str2;
	size_t	len;

	len = ft_strlen(str);
	str2 = (char *)str;
	if (!c)
		return (&str2[len]);
	while (len--)
	{
		if (str2[len] == (char)c)
			return (&str2[len]);
	}
	return (0);
}
