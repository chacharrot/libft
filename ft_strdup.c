/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:53:17 by scha              #+#    #+#             */
/*   Updated: 2021/01/06 18:53:17 by scha             ###   ########.fr       */
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
