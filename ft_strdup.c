/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 19:23:43 by scha              #+#    #+#             */
/*   Updated: 2021/01/07 19:24:21 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	slen;
	size_t	i;

	slen = 0;
	while (s1[slen])
		slen++;
	if (!(dest = (char *)malloc(sizeof(char) * (slen + 1))))
		return (NULL);
	i = 0;
	while (i < slen)
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
