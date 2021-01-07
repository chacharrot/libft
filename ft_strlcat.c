/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:57:29 by scha              #+#    #+#             */
/*   Updated: 2021/01/06 15:57:29 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	i;
    size_t	j;

	i = ft_strlen(dst);
	if(size < i)
		return(ft_strlen(src) + size);
	j = 0;
	while(i < size && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	return(ft_strlen(dst) + ft_strlen(src));
}
