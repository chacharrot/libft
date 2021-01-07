/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 21:11:54 by scha              #+#    #+#             */
/*   Updated: 2020/12/26 21:11:54 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strrchr(const char* str, int c)
{
    char	*str2;
	size_t	len;

	len  = ft_strlen(str);
	str2 = (char *)str;
	if (!c)
		return(*(str2 + len));
	while (--len)
	{
		if (*(str2 + len) == (char)c)
			return (*(str2 + len));
	}
	return (0);
}
